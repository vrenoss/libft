/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_toupper.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/05 14:21:51 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/05 14:27:50 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	printf("%c\n", ft_toupper('r'));
	printf("%c\n", ft_toupper('8'));
	return(0);
}
*/
