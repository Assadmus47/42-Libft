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

static int	num_char(const char *str, char c, int *p, int *j)
{
	int	i;
	int	occ;

	occ = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			occ++;
		i++;
	}
	*p = 0;
	*j = 0;
	return (occ);
}

static void	skip_charset(const char *str, int *i, char c, int *init)
{
	while (str[*i] == c)
		(*i)++;
	*init = *i;
}

static int	ft_strlength(const char *str, int index, char c)
{
	int	i;

	i = index;
	while (str[i] != c)
		i++;
	return (i - index);
}

static void	copy(const char *str, char *str1, int init, char c)
{
	int	i;

	i = 0;
	while (str[init] != c)
	{
		str1[i] = str[init];
		i++;
		init++;
	}
	str1[i] = '\0';
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		init;
	int		j;
	char	**new_str;

	new_str = malloc((sizeof(char *) * num_char(s, c, &i, &j)) + 1);
	skip_charset(s, &i, c, &init);
	while (s[i])
	{
		if ((s[i] == c || s[i + 1] == '\0'))
		{
			new_str[j] = malloc((sizeof(char) * ft_strlength(s, init, c)) + 1);
			copy(s, new_str[j++], init, c);
			skip_charset(s, &i, c, &init);
			if (!s[i])
				break ;
		}
		i++;
	}
	new_str[j] = NULL;
	return (new_str);
}

/*
int	main(void)
{
	char **c;
	c =ft_split("abc gcb bb",' ');
	int i = 0,j = 0;
	printf("----------------main");
	while(c[i])
	{
		printf("\n oo %d : \n",i);
		j = 0;
		while(c[i][j])
		{
			printf("%c",c[i][j++]);
		}
		printf("\n");
		i++;
	}
}*/