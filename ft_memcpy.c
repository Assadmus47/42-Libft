/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 00:13:23 by marvin            #+#    #+#             */
/*   Updated: 2025/11/13 00:13:23 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void * destination, const void * source, size_t size)
{
	size_t			i;
	unsigned char	*d;
	const unsigned char	*s;

	i = 0;
	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	while (i < size)
	{
		d[i] = s[i];
		i++;
	}
	return (destination);
}