/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 01:22:46 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/27 01:59:26 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		c_included_str(char c, char const *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_len;
	size_t	s;
	size_t	e;
	char	*return_s;

	s1_len = ft_strlen(s1);
	s = 0;
	while (c_included_str(*(s1 + s), set))
		s++;
	if (s == s1_len)
		s = 0;
	e = s1_len;
	while (c_included_str(*(s1 + e - 1), set) && 0 < e)
		e--;
	return_s = malloc(sizeof(char) * (e - s) + 1);
	if (return_s)
	{
		if (e)
			ft_memcpy(return_s, s1 + s, (e - s));
		*(return_s + (e - s)) = 0;
	}
	return (return_s);
}
