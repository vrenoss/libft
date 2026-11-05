/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strrchr.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/05 14:51:19 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/05 15:03:19 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	cc;
	char			*save;
	int				i;

	cc = (unsigned char)c;
	save = NULL;
	i = 0;
	while (s[i])
	{
		if ((unsigned char)s[i] == cc)
			save = (char *)&s[i];
		i++;
	}
	if (cc == '\0')
		save = (char *)&s[i];
	return (save);
}
/*
#include <stdio.h>

int main()
{
	printf("%s", ft_strrchr("je ooo loni", 'o'));
}
*/
