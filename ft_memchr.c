/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:38:46 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/14 19:02:43 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memoryBlock, int searchedChar, size_t size)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = (unsigned char *)memoryBlock;
	while (i < size)
	{
		if (p[i] == (unsigned char)searchedChar)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
