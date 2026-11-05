/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_atoi.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/05 16:56:36 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/05 17:09:55 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

int	ft_atoi(const char *nptr)
{
	int	sign;
	int	result;
	int	i;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '-')
		sign = -1;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("%d | %d\n", ft_atoi("42"), atoi("42"));
	printf("%d | %d\n", ft_atoi("-42"), atoi("-42"));
	printf("%d | %d\n", ft_atoi("	123"), atoi("	123"));
	printf("%d | %d\n", ft_atoi("+56"), atoi("+56"));
	printf("%d | %d\n", ft_atoi("123abc"), atoi("123abc"));
	printf("%d | %d\n", ft_atoi("abc123"), atoi("abc123"));
	printf("%d | %d\n", ft_atoi("--42"), atoi("--42"));
	return (0);
}
*/
