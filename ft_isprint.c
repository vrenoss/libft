/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_isprint.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/04 13:45:54 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/04 14:09:52 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

int	ft_isprint(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
	printf("%d, %c", ft_isprint(av[1][0]), av[1][0]);
}
*/
