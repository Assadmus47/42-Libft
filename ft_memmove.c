/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 23:36:56 by marvin            #+#    #+#             */
/*   Updated: 2025/11/17 17:44:25 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

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
int main(void)
{
	char dest[] = "rem ipssum dolor sit a";
	char src[8];
	if (src != ft_memmove(src, dest, 8))
        write(1, "dest's adress was not returned\n", 31);
    write(1, dest, 22);
}