/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_tolower.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/05 14:27:44 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/05 14:34:01 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_tolower('R'));

	return (0);
}
*/
