/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 23:36:56 by marvin            #+#    #+#             */
/*   Updated: 2025/11/12 23:36:56 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t size)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = size;
	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	while (i > 0)
	{
		i--;
		d[i] = s[i];
	}
	return (destination);
}
