/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strchr.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/05 14:35:34 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/05 14:49:39 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	cc;

	cc = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *)&s[i]);
	return (NULL);
}
/*
#include <stdio.h>

int main(void)
{
	char str[] = "Minecraft";
	char *result;

	result = ft_strchr(str, 'a');
	printf("Resultat : %s\n", result);
	return (0);
}
*/
