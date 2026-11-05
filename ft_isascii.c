/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_isascii.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/04 12:56:23 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/04 13:43:24 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

int	ft_isascii(char c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(int ac, char **av)
{
	printf("%d, %c", ft_isascii(av[1][0]), av[1][0]);
}
*/
