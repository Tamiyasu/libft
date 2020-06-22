/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:36:50 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/22 18:25:37 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isupper(int c)
{
	if ('A' <= c && c <= 'Z')
		return (0);
	return (1);
}

int ft_islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (0);
	return (1);
}


int ft_isalpha(int c)
{
	return (ft_isupper(c) || ft_islower(c));
}
