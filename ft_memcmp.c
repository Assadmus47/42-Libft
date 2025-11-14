/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 19:03:58 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/14 19:50:35 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *pointer1, const void *pointer2, size_t size)
{
	int		*p1;
	int		*p2;
	size_t	i;

	i = 0;
	p1 = (unsigned char) pointer1;
	p2 = (unsigned char) pointer2;
	while (i < size)
	{
		if (p1[i] < p2[i])
			return ((int)p1[i]);
		else if (p1[i] > p2[i])
			return ((int)p2[i]);
	}
	return (0);
}