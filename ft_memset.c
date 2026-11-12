/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_memset.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/04 13:58:42 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/04 15:12:25 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = dest;
	while (i < count)
		str[i++] = (unsigned char)c;
	return (dest);
}

/*
#include <stdio.h>


int main(void)
{
	char d[5];

	ft_memset(d, 'A', 4);
	d[4] = '\0';
	printf("%s\n", d);
	return (0);
}
*/
