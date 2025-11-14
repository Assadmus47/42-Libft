/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 17:17:37 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/14 18:07:47 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int searchedChar)
{
	size_t		stlen;
	size_t		i;

	stlen = ft_strlen(string);
	i = stlen - 1;
	while (i > 0)
	{
		if (string[i] == searchedChar)
			return (&string[i]);
		i--;
	}
	if (string[i] == searchedChar)
		return (&string[i]);
	if (searchedChar == '\0')
		return (&string[stlen]);
	return (NULL);
}
