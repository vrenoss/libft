/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaganon <rpaganon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/08 17:11:38 by rpaganon          #+#    #+#             */
/*   Updated: 2026/11/12 18:54:09 by rpaganon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>

int	incharset(char s, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == s)
			return (1);
		i++;
	}
	return (0);
}

size_t	finalsize(char const *s1, char const *set)
{
	size_t	len;
	size_t	i;
	size_t	nset;

	len = ft_strlen(s1);
	i = 0;
	nset = 0;
	while (incharset(s1[i], set))
	{
		nset++;
		i++;
	}
	if (nset >= len)
		return (len);
	i = len - 1;
	while (incharset(s1[i], set))
	{
		nset++;
		i--;
	}
	return (len - nset);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	nset;
	size_t	i;
	size_t	j;
	char	*dest;

	nset = finalsize(s1, set);
	i = 0;
	j = 0;
	dest = malloc((nset + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[nset] = '\0';
	while (incharset(s1[j], set))
		j++;
	while (i < nset)
	{
		dest[i] = s1[i + j];
		i++;
	}
	return (dest);
}
