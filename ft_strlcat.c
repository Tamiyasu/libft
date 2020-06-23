/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:42:27 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/23 20:29:34 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t src_l;
    size_t dst_l;

    src_l = ft_strlen(src);
    dst_l = ft_strlen(dst);
    i = 0;
    while (*(src + i) !=0 || (i + dst_l) < dstsize)
    {
        *(dst + dst_l + i) = *(src + i);
        i++;
    }
    return (src_l + dst_l);
}