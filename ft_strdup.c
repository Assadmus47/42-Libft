/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 22:34:29 by marvin            #+#    #+#             */
/*   Updated: 2025/11/29 19:15:35 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*copy;
	size_t	srclen;
	size_t	i;

	copy = NULL;
	srclen = ft_strlen(src);
	copy = malloc((sizeof(char) * srclen) + 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (i <= srclen)
	{
		copy[i] = src[i];
		i++;
	}
	return (copy);
}
