/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:43:13 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/24 21:25:24 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (n == 0)
		return (0);
	while (*(s1 + i) == *(s2 + i) && i < (n - 1))
		i++;
	if (*(s1 + i) != 0 && *(s2 + i) != 0)
		return (*(s1 + i) - *(s2 + i));
	if (*(s1 + i) == 0)
		return (-1);
	return (1);
}
