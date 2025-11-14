/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkacemi <mkacemi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 16:23:27 by mkacemi           #+#    #+#             */
/*   Updated: 2025/11/14 16:33:08 by mkacemi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		j;
	size_t	src_taille;
	size_t	dst_taille;

	src_taille = 0;
	dst_taille = 0;
	while (src[src_taille])
		src_taille++;
	while (dst[dst_taille])
		dst_taille++;
	if (size <= dst_taille)
		return (size + src_taille);
	i = 0;
	while (dst[i])
		i++;
	j = 0;
	while (j < (size - dst_taille - 1) && src[j])
		dst[i + j] = src[j++];
	dst[i + j] = '\0';
	return (src_taille + dst_taille);
}
