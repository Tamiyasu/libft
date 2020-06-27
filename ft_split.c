/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 20:51:57 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/26 13:49:51 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		count_words(char const *str, char c)
{
	int		return_i;
	int		gap_f;

	return_i = 0;
	gap_f = 1;
	while (*str)
	{
		if (*str == c)
			gap_f = 1;
		else
		{
			if (gap_f)
			{
				return_i++;
				gap_f = 0;
			}
		}
		str++;
	}
	return (return_i);
}

int		count_word_length(char const *str, char c)
{
	char *i_p;

	i_p = (char *)str;
	while (*i_p && *i_p != c)
		i_p++;
	return (i_p - str);
}

char	**ft_split(char const *s, char c)
{
	char	**return_pp;
	char	**it_pp;
	char	*it_p;
	int		words;
	int		word_length;

	words = count_words(s, c);
	return_pp = malloc(sizeof(char *) * (words + 1));
	if (!return_pp)
		return (return_pp);
	it_pp = return_pp;
	while (words--)
	{
		while (*s == c)
			s++;
		word_length = count_word_length(s, c);
		*it_pp = malloc(sizeof(char) * (word_length + 1));
		it_p = *it_pp;
		while (word_length--)
			*it_p++ = *s++;
		*it_p = 0;
		it_pp++;
	}
	*it_pp = 0;
	return (return_pp);
}
