/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strnstr.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/05 16:11:02 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/05 16:55:05 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (i < len)
	{
		j = 0;
		while (i + j < len && needle[j] && haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *) &haystack[i]);
		i++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Bonjour tout le monde";

	printf("%s\n", ft_strnstr(str, "tout", 21));
	printf("%s\n", ft_strnstr(str, "jour", 21));
	printf("%p\n", ft_strnstr(str, "salut", 21));
	printf("%s\n", ft_strnstr(str, "", 21));
	printf("%p\n", ft_strnstr(str, "monde", 10));
	return (0);
}
*/
