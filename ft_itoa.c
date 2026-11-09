/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaganon <rpaganon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:16:30 by rpaganon          #+#    #+#             */
/*   Updated: 2026/11/09 15:26:44 by rpaganon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	num_size(int n)
{
	int			size;
	long int	nb;

	nb = n;
	size = 0;
	if (nb < 0)
		nb *= -1;
	while (nb > 9)
	{
		nb /= 10;
		size++;
	}
	return (size + 1);
}

int	get_sign(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

int	invert(int n)
{
	if (n == -1)
		return (2);
	return (1);
}

char	*ft_itoa(int n)
{
	long int	nb;
	char		*dest;
	int			size;
	int			sign;

	nb = n;
	sign = get_sign(nb);
	size = num_size(nb);
	dest = malloc((size + invert(sign)) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[size + invert(sign) - 1] = '\0';
	if (nb < 0)
		nb = nb * sign;
	while (nb > 9)
	{
		printf("h%dh", num_size(nb) - 2 + invert(sign));
		dest[num_size(nb) - 2 + invert(sign)] = '0' + (nb % 10);
		printf("|%ld|\n", nb);
		nb /= 10;
	}
	dest[invert(sign) - 1] = '0' + (nb % 10);
	if (sign == -1)
		dest[0] = '-';
	return (dest);
}
