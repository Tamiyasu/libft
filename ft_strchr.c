/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <tmurakam@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 14:40:29 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/25 22:08:23 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char *i_p;

	i_p = (char *)s;
	while (*i_p != 0 && *i_p != c)
		i_p++;
	if (*i_p != c)
		i_p = 0;
	return (i_p);
}
