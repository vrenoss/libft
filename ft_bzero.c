/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_bzero.c											:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/04 15:10:16 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/04 15:36:01 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
		str[i++] = 0;
}

/*
#include <stdio.h>


int main(void)
{
	char d[] = "bonjour";
	for (int i = 0; i < sizeof(d); i++)
		printf("%d ", (unsigned char)d[i]);
	printf("\n");
	ft_bzero(d, 4);
	for (int i = 0; i < sizeof(d); i++)
		printf("%d ", (unsigned char)d[i]);
	return (0);
}
*/
