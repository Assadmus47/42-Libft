/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 01:46:28 by marvin            #+#    #+#             */
/*   Updated: 2025/11/27 17:47:29 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	unsigned char	*p;
	size_t			i;
	size_t			total_size;

	total_size = elementCount * elementSize;
	if (elementCount != 0 && elementSize > (size_t)-1 / elementCount)
		return (NULL);
	i = 0;
	p = NULL;
	p = malloc(total_size);
	if (p == NULL)
		return (NULL);
	while (i < total_size)
	{
		p[i] = 0;
		i++;
	}
	return ((void *)p);
}

/*int	main(void)
{
	int	*p;
	p = (int *)ft_calloc(10,sizeof(int));
	int	i;
	i = 0;
	while ( i< 10)
		printf("%d ",p[i++]);
}*/