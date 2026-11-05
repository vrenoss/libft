/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_isdigit.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/04 12:02:55 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/04 12:58:23 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

int	ft_isdigit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main(int ac, char **av)
{
	printf("%d, %c", ft_isdigit(av[1][0]), av[1][0]);
}
*/
