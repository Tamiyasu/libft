/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:43:13 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/26 00:06:27 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0 || (*s1 == 0 && *s2 == 0))
		return (0);
	while (*(s1 + i) == *(s2 + i) && i < (n - 1) && *(s1 + i) != 0)
		i++;
	return ((unsigned char)*(s1 + i) - (unsigned char)*(s2 + i));
}
