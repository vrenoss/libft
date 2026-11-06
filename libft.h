/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaganon <rpaganon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 17:35:07 by rpaganon          #+#    #+#             */
/*   Updated: 2026/11/06 12:16:23 by rpaganon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>

void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);

#endif
