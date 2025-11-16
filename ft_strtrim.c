/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft_strtrim.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 01:42:32 by marvin            #+#    #+#             */
/*   Updated: 2025/11/16 01:42:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_str(const char *str, char c)
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
	size_t	i;
	size_t	j;
	size_t	strln;

	new_str = NULL;
	strln = ft_strlen(s1);
	new_str = malloc((sizeof(char) * strln) + 1);
	if (new_str == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (in_str(set, s1[i]))
		{
			i++;
			continue ;
		}
		new_str[j++] = s1[i++];
	}
	new_str[j] = '\0';
	return (new_str);
}

/*int	main(void)
{
	char *p = ft_strtrim("ajmal whda f had pp danya hiya dib batoul","pp");
	int	i = 0;
	while (p[i])
		printf("%c",p[i++]);
}*/