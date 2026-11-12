/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaganon <rpaganon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 14:16:30 by rpaganon          #+#    #+#             */
/*   Updated: 2026/11/12 18:56:10 by rpaganon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>

size_t	num_size(int n)
{
	size_t		size;
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
	size_t		size;
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
		dest[num_size(nb) - 2 + invert(sign)] = '0' + (nb % 10);
		nb /= 10;
	}
	dest[invert(sign) - 1] = '0' + (nb % 10);
	if (sign == -1)
		dest[0] = '-';
	return (dest);
}
