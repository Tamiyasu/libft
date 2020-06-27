/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmurakam <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/25 20:51:57 by tmurakam          #+#    #+#             */
/*   Updated: 2020/06/27 20:34:44 by tmurakam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

void	free_2d(char ***pp)
{
	char **it_pp;

	it_pp = *pp;
	while (*it_pp)
		free(*(it_pp++));
	free(*pp);
	pp = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**return_pp;
	char	**it_pp;
	int		words;
	int		word_length;

	words = count_words(s, c);
	if ((return_pp = ft_calloc(words + 1, sizeof(char *))))
	{
		it_pp = return_pp;
		while (words--)
		{
			while (*s == c)
				s++;
			word_length = count_word_length(s, c);
			if (!(*it_pp = ft_calloc(word_length + 1, sizeof(char))))
				break ;
			ft_strlcpy(*(it_pp++), s, word_length + 1);
			s += word_length;
		}
		if (!words)
			free_2d(&return_pp);
	}
	return (return_pp);
}
