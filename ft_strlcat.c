/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strlcat.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/05 13:42:08 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/05 14:20:42 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen((char *)src);
	dst_len = 0;
	while (dst_len < size && dst[dst_len])
		dst_len++;
	i = 0;
	if (size > dst_len)
	{
		while (src[i] && (dst_len + i) < (size - 1))
		{
			dst[dst_len + i] = src[i];
			i++;
		}
		dst[dst_len + i] = '\0';
		return (dst_len + src_len);
	}
	return (size + src_len);
}
/*
#include <stdio.h>

int main(void)
{
	char	dst[30] = "Voiture ";
	char	src[] = "VroumVroum";
	size_t	ret;

	ret = ft_strlcat(dst, src, sizeof(dst));

	printf("Resultat : %s\n", dst);
	printf("Retour	 : %zu\n", ret);
	return (0);
}
*/
