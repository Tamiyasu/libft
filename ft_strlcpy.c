/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:42:38 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/23 20:41:02 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;
    
    i = 0;
    while (*(src + i) != 0 || i < size - 1)
    {
        *(dest + i) = *(src + i);
        i++;
    }
    *(dest + i) = 0;
    while (*(src + i) != 0)
        i++;
    return (i);
}