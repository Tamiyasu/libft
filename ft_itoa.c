/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/27 02:08:22 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/27 12:58:13 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_addcstr(char **str, char c)
{
	char	*return_s;
	size_t	return_s_len;

	if (*str)
	{
	return_s_len = ft_strlen(*str) + 1;
	return_s = malloc(sizeof(char) * (return_s_len + 1));
	if (return_s)
	{
		ft_strlcpy(return_s, *str, return_s_len);
		*(return_s + return_s_len - 1) = c;
		*(return_s + return_s_len) = 0;
		free(*str);
	}
	*str = return_s;
	}
}

char	*ft_itoa(int n)
{
	char	*return_s;
	int		next_n;
	int		this_o;

	next_n = n / 10;
	this_o = n % 10;
	this_o = (0 < this_o ? this_o : -this_o);
	if (next_n == 0)
	{
		return_s = malloc(sizeof(char));
		if (return_s)
		{
			*return_s = 0;
			if (0 > n)
				ft_addcstr(&return_s, '-');
			ft_addcstr(&return_s, '0' + this_o);
		}
		return (return_s);
	}
	return_s = ft_itoa(next_n);
	ft_addcstr(&return_s, '0' + this_o);
	return (return_s);
}
