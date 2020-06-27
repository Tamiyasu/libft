/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 13:33:26 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/27 15:34:21 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*return_s;
	char			*it_p;
	size_t			s_len;
	unsigned int	i;

	s_len = ft_strlen(s);
	return_s = malloc(sizeof(char) * (s_len + 1));
	if (return_s)
	{
		it_p = return_s;
		i = 0;
		while (*s)
			*(it_p++) = f(i++, *(s++));
		*it_p = 0;
	}
	return (return_s);
}
