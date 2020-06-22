/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:29:24 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/22 15:36:22 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_lib.h"

int	ft_atoi(char *str)
{
	int return_int;
	int input_sign;

	input_sign = 1;
	return_int = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			input_sign *= -1;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		return_int = return_int * 10 + *str - '0';
		str++;
	}
	return (input_sign * return_int);
}
