/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaganon <rpaganon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:33:05 by rpaganon          #+#    #+#             */
/*   Updated: 2026/11/12 14:52:02 by rpaganon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;
	t_list	*prev;

	if (!lst)
		return ;
	tmp = *lst;
	while (tmp)
	{
		prev = tmp;
		tmp = tmp->next;
		ft_lstdelone(prev, del);
	}
	*lst = NULL;
}
