/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 01:46:28 by marvin            #+#    #+#             */
/*   Updated: 2025/11/29 16:58:42 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t element_count, size_t element_size)
{
	unsigned char	*p;
	size_t			i;
	size_t			total_size;

	total_size = element_count * element_size;
	if (element_count != 0 && element_size > (size_t)-1 / element_count)
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