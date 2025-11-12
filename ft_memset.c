/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 23:56:10 by marvin            #+#    #+#             */
/*   Updated: 2025/11/11 23:56:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void * pointer, int value, size_t count )
{
	size_t	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)pointer;
	while (i < count)
	{
		p[i++] = value;
	}
	return (pointer);
}