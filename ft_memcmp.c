/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_memcmp.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/05 15:55:19 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/05 16:07:14 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*ss1;
	const unsigned char	*ss2;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%d | %d\n", ft_memcmp("ABC", "ABC", 3), memcmp("ABC", "ABC", 3));
	printf("%d | %d\n", ft_memcmp("ABC", "ABD", 3), memcmp("ABC", "ABD", 3));
	printf("%d | %d\n", ft_memcmp("ABC", "XYZ", 0), memcmp("ABC", "XYZ", 0));
	printf("%d | %d\n", ft_memcmp("ABC", "AB", 3), memcmp("ABC", "AB", 3));
	return (0);
}
*/
