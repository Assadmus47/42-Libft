/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:44:45 by marvin            #+#    #+#             */
/*   Updated: 2025/11/17 16:16:49 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] != c && (i == 0 || str[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	copy_word(const char *src, char *dst, int start, int end)
{
	int	i;

	i = 0;
	while (start < end)
		dst[i++] = src[start++];
	dst[i] = '\0';
}

static char	**free_all(char **tab, int j)
{
	while (j--)
		free(tab[j]);
	free(tab);
	return (NULL);
}

static	void	initlize(int *i, int *j, int *start)
{
	*i = 0;
	*j = 0;
	*start = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		index[3];

	tab = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!tab)
		return (NULL);
	initlize(&index[0], &index[1], &index[2]);
	while (s[index[0]])
	{
		if (s[index[0]] != c)
		{
			index[2] = index[0];
			while (s[index[0]] && s[index[0]] != c)
				index[0]++;
			tab[index[1]] = malloc(sizeof(char) * (index[0] - index[2] + 1));
			if (!tab[index[1]])
				return (free_all(tab, index[1]));
			copy_word(s, tab[index[1]++], index[2], index[0]);
		}
		else
			index[0]++;
	}
	tab[index[1]] = NULL;
	return (tab);
}
