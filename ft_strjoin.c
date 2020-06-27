/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 01:13:04 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/27 01:21:54 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1_len;
	size_t	s2_len;
	char	*return_s;

	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	return_s = malloc(s1_len + s2_len + 1);
	if (return_s)
	{
		ft_memcpy(return_s, s1, s1_len);
		ft_memcpy(return_s + s1_len, s2, s2_len);
		*(return_s + s1_len + s2_len) = 0;
	}
	return (return_s);
}
