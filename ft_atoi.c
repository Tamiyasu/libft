/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 19:49:06 by tmurakam          #+#    #+#             */
/*   Updated: 2020/01/20 22:04:24 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int return_int;
	int input_sign;

	input_sign = 1;
	return_int = 0;
	while (*str == '\t' || *str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r' || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
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
