/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaganon <rpaganon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 11:25:20 by rpaganon          #+#    #+#             */
/*   Updated: 2026/11/09 14:16:33 by rpaganon         ###   ########lyon.fr   */
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

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libft.h"

static void	free_split(char **split)
{
	int	i;

	i = 0;
	while (split[i])
	{
		free(split[i]);
		i++;
	}
	free(split);
}

static void	print_split(char **split)
{
	int	i;

	i = 0;
	printf("[");
	while (split[i])
	{
		printf("\"%s\"", split[i]);
		if (split[i + 1])
			printf(", ");
		i++;
	}
	printf("]\n");
}

static int	compare_split(char **a, char **b)
{
	int	i;

	i = 0;
	while (a[i] && b[i])
	{
		if (strcmp(a[i], b[i]) != 0)
			return (0);
		i++;
	}
	return (a[i] == NULL && b[i] == NULL);
}

static char	**reference_split(const char *s, char c)
{
	char	**result;
	int		count;
	int		i;
	int		start;
	int		word;

	if (!s)
		return (NULL);
	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	result = malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	i = 0;
	word = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			result[word] = malloc(i - start + 1);
			if (!result[word])
			{
				while (word > 0)
					free(result[--word]);
				free(result);
				return (NULL);
			}
			memcpy(result[word], s + start, i - start);
			result[word][i - start] = '\0';
			word++;
		}
	}
	result[word] = NULL;
	return (result);
}

static void	test(const char *s, char c)
{
	char	**mine;
	char	**reference;

	printf("\nInput: \"%s\" | Separator: '%c'\n",
		s, c);
	mine = ft_split(s, c);
	reference = reference_split(s, c);
	if (!mine || !reference)
	{
		printf("Allocation error\n");
		if (mine)
			free_split(mine);
		if (reference)
			free_split(reference);
		return ;
	}
	printf("ft_split : ");
	print_split(mine);
	printf("Reference: ");
	print_split(reference);
	if (compare_split(mine, reference))
		printf("\033[32m[OK]\033[0m\n");
	else
		printf("\033[31m[KO]\033[0m\n");
	free_split(mine);
	free_split(reference);
}

int	main(void)
{
	test("bonjour salut", ' ');
	test("bonjour", ' ');
	test("", ' ');
	test("   ", ' ');
	test("  bonjour  salut  ", ' ');
	test("abc", 'a');
	test("aaaabc", 'a');
	test("abc", '\0');
	test("a-b-c-d", '-');
	test("----abc----def----", '-');
	test("abc   def   ghi", ' ');
	test("42", ' ');
	test("a", 'a');
	test("abababab", 'a');
	test("hello,world,42", ',');
	return (0);
}
*/