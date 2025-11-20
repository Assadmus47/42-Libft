/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 00:54:18 by marvin            #+#    #+#             */
/*   Updated: 2025/11/20 00:54:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	count_num(long n)
{
	int	count;

	count = 1;
	if (n < 0)
	{
		n *= -1;
		count++;
	}
	while ((n / 10) != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	int			i;
	char		*str;
	long		nb;

	nb = n;
	i = count_num(nb);
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	str[i] = '\0';
	if (nb < 0)
	{
		nb *= -1;
		str[0] = '-';
	}
	i--;
	while ((nb / 10) != 0 && str[i] != '-')
	{
		str[i] = '0' + (nb % 10);
		i--;
		nb /= 10;
	}
	str[i] = '0' + (nb % 10);
	return (str);
}
