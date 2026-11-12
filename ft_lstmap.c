/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaganon <rpaganon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 14:53:27 by rpaganon          #+#    #+#             */
/*   Updated: 2026/11/12 15:20:54 by rpaganon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dst;
	t_list	*tmp;
	t_list	*new;

	if (!lst || !del || !f)
		return (NULL);
	tmp = lst;
	dst = ft_lstnew(f(lst->content));
	if (!dst)
		return (NULL);
	while (tmp)
	{
		tmp = tmp->next;
		if (tmp)
		{
			new = ft_lstnew(f(tmp->content));
			if (!new)
			{
				ft_lstclear(&dst, del);
				return (NULL);
			}
			ft_lstadd_back(&dst, new);
		}
	}
	return (dst);
}
