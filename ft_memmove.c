/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 23:36:56 by marvin            #+#    #+#             */
/*   Updated: 2025/11/27 17:42:46 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t size)
{
	size_t			i;

	if (!destination && !source)
		return (NULL);
	if (size == 0 || destination == source)
		return (destination);
	i = 0;
	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	if (dest > src)
	{
		i = size;
		while (i > 0)
		{
			i--;
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		}
	}
	else
	{
		while (i < size)
		{
			((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
			i++;
		}
	}
	return (dest);
}
/*
int main(void)
{
	char dest[] = "rem ipssum dolor sit a";
	char src[8];
	if (src != ft_memmove(src, dest, 8))
        write(1, "dest's adress was not returned\n", 31);
    write(1, dest, 22);
}
*/
