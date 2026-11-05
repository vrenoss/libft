/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_memmove.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/04 19:07:05 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/04 19:51:44 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	if (!dst || !src || !len)
		return (dst);
	if (d > s)
	{
		i = len;
		while (i-- > 0)
			d[i] = s[i];
		return (dst);
	}
	while (i < len)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>

int main(void)
{
	char str1[] = "ABCDEFG";
	char str2[] = "ABCDEFG";
	char src[] = "Bonjour";
	char dest[20];

	ft_memmove(str1 + 2, str1, 5);
	printf("Droite : %s\n", str1);

	ft_memmove(str2, str2 + 2, 5);
	printf("Gauche : %s\n", str2);

	ft_memmove(dest, src, 8);
	printf("Copie : %s\n", dest);

	return (0);
}
*/
