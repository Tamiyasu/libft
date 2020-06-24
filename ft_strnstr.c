/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:43:22 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/24 09:05:58 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;
    int     f;
    size_t  haystack_len;
    size_t  needle_len;

    haystack_len = ft_strlen(haystack);
    needle_len = ft_strlen(needle);
    if (needle_len > haystack_len || needle_len > len)
        return (0);
    if (needle_len == 0)
        return ((char *)haystack);
    i = 0;
    while ((i + needle_len) < len && (i + needle_len) < haystack_len)
    {
        j = 0;
        f = 0;
        while(j < needle_len)
        {
            if (*(haystack + i + j) != *(needle + j))
            {
                f = 1;
                break;
            }
            j++;
        }
        if (f == 0)
            break;
        i++;
    }
    return ((char *)haystack + i);
}
