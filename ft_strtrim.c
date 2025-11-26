/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 01:42:32 by marvin            #+#    #+#             */
/*   Updated: 2025/11/26 18:36:51 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	size_t	start;
	size_t	end;
	size_t	i;

	if (!s1 || !set)
		return ("NULL");
	start = 0;
	while (s1[start] && is_in_set(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && is_in_set(set, s1[end - 1]))
		end --;
	new_str = malloc((sizeof(char) * (end - start + 1)));
	if (!new_str)
		return (NULL);
	i = 0;
	while (start < end)
		new_str[i++] = s1[start++];
	new_str[i] = '\0';
	return (new_str);
}
/*
int	main(void)
{
	char tab [] = "     llll    lorem ipsum dolor sit amet    ll l ll ";
	char *p = ft_strtrim(tab,"l ");
	int	i = 0;
	while (p[i])
		printf("%c",p[i++]);
}
			strln = ft_strlen(s1);
	new_str = malloc((sizeof(char) * strln) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
		*/