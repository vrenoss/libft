/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strlen.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/02 21:41:02 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/02 21:58:24 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	printf("%d", ft_strlen(av[1]));
}
*/
