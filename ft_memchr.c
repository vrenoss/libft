/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_memchr.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/05 15:25:11 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/05 15:53:50 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*str;

	str = (const unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d | %d\n", ft_memcmp("ABC", "ABC", 3), memcmp("ABC", "ABC", 3));
	printf("%d | %d\n", ft_memcmp("ABC", "ABD", 3), memcmp("ABC", "ABD", 3));
	printf("%d | %d\n", ft_memcmp("ABC", "XYZ", 0), memcmp("ABC", "XYZ", 0));
	return (0);
}
*/
