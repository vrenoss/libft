/* ************************************************************************** */
/*																			  */
/*														  :::	   ::::::::   */
/*	 ft_strncmp.c										:+:		 :+:	:+:   */
/*													  +:+ +:+		  +:+	  */
/*	 By: rpaganon <rpaganon@student.42lyon.fr>		+#+  +:+	   +#+		  */
/*												  +#+#+#+#+#+	+#+			  */
/*	 Created: 2026/11/05 15:06:08 by rpaganon		   #+#	  #+#			  */
/*	 Updated: 2026/11/05 15:22:28 by rpaganon		  ###	########lyon.fr   */
/*																			  */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	if (n == i)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_strncmp("ABCx", "ABCy", 3));
	printf("%d\n", ft_strncmp("ABC", "XYZ", 0));
	return (0);
}
*/
