/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 15:44:45 by marvin            #+#    #+#             */
/*   Updated: 2025/11/16 15:44:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	skip_charset(const char *str, int *i, char c, int *init)
{
	while (str[*i] == c)
		(*i)++;
	*init = *i;
}

int	num_char(const char *str, char c, int *p, int *init)
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
	skip_charset(str, p, c, init);
	return (occ);
}

int	ft_strlength(const char *str, int index, char c)
{
	int	i;

	i = index;
	while (str[i] != c && str[i])
		i++;
	return (i - index);
}

void	copy(const char *str, char *str1, int init, char c)
{
	int	i;

	i = 0;
	while (str[init] != c && str[init])
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

	new_str = NULL;
	j = 0;
	new_str = malloc(sizeof(char *) * (num_char(s, c, &i, &init) + 1));
	if (!new_str)
		return (NULL);
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


int	main(void)
{
	char **c;
	c =ft_split("a,,b,,c",',');
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
}