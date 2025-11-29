/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 18:38:46 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/29 18:59:31 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *memory_block, int searched_char, size_t size)
{
	size_t				i;
	const unsigned char	*p;

	i = 0;
	p = (unsigned char *)memory_block;
	while (i < size)
	{
		if (p[i] == (unsigned char)searched_char)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}
