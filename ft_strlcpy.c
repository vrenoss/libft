/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strlcpy.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/04 19:57:40 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/04 20:09:28 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dst[5];
	size_t	ret;

	ret = ft_strlcpy(dst, "Bonjour", sizeof(dst));

	printf("dst : %s\n", dst);
	printf("ret : %zu\n", ret);
	return (0);
}
*/
