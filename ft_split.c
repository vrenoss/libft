/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaganon <rpaganon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:25:20 by rpaganon          #+#    #+#             */
/*   Updated: 2026/11/10 16:37:10 by rpaganon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (word);
}

int	free_dest(int word, char **dest)
{
	if (!dest[word])
	{
		while (word > 0)
			free(dest[--word]);
		free(dest);
		return (1);
	}
	return (0);
}

char	**split_section(char const *s, char c, char **dest)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			j = i;
			while (s[i] && s[i] != c)
				i++;
			dest[word] = malloc((i - j + 1) * sizeof(char));
			if (free_dest(word, dest))
				return (NULL);
			ft_strlcpy(dest[word++], &s[j], i - j + 1);
		}
		else
			i++;
	}
	dest[word] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;

	if (!s)
		return (NULL);
	dest = malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	return (split_section(s, c, dest));
}
