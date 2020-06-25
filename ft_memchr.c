/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:38:14 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/26 01:52:27 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	c_uchar;
	size_t			i;

	c_uchar = (unsigned char)c;
	i = 0;
	while (i < n && *((unsigned char *)s + i) != c_uchar)
		i++;
	if (i == n)
		return (0);
	return ((void *)s + i);
}
