/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_memcpy.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/04 18:32:19 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/04 18:46:15 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	i = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>

int main(void)
{
	char src[] = "Bonjour";
	char dest[20];

	ft_memcpy(dest, src, 8);
	printf("%s\n", dest);

	return (0);
}
*/
