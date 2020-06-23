/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:45:39 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/23 21:15:20 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *strrchr(const char *s, int c)
{
    char *i_p;

    i_p = (char *)s + ft_strlen(s);
    while (i_p != s || *i_p != c)
        i_p--;
    if (*i_p != c)
        i_p = 0;
    return (i_p);
}