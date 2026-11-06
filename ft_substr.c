/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaganon <rpaganon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 14:18:24 by rpaganon          #+#    #+#             */
/*   Updated: 2026/11/06 15:41:33 by rpaganon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	len_s;
	char	*dest;

	if (!s)
		return (NULL);
	len_s = ft_strlen((char *)s);
	if (start < len_s)
	{
		if (len > len_s - start)
			len = len_s - start;
		dest = ft_calloc(len + 1, sizeof(char));
		if (!dest)
			return (NULL);
		ft_strlcpy(dest, &s[start], len + 1);
		return (dest);
	}
	dest = ft_calloc(1, sizeof(char));
	if (!dest)
		return (NULL);
	return (dest);
}
