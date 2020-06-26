/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:36:11 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/26 10:26:54 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*return_p;
	size_t	i;

	return_p = malloc(count * size);
	if (!return_p)
		return (return_p);
	i = 0;
	while (i < (size * count))
		*(return_p + i++) = 0;
	return ((void *)return_p);
}
