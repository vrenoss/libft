/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_isalpha.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/04 11:47:07 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/04 12:52:49 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main(int ac, char **av)
{
	printf("%d, %c", ft_isalpha(av[1][0]), av[1][0]);
}
*/
