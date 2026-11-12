/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaganon <rpaganon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 15:04:58 by rpaganon          #+#    #+#             */
/*   Updated: 2026/11/12 14:50:43 by rpaganon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>

// int	main()
// {
// 	t_list	*lst;
// 	int	cnt;
// 	cnt = 2;
// 	lst = ft_lstnew(&cnt);
// 	int	i = 0;
// 	while (i < 3){
// 		cnt += cnt;
// 		ft_lstadd_front(&lst, ft_lstnew(&cnt));
// 		i++;
// 	}
// 	i = *(int *)ft_lstlast(lst)->content;
// 	printf("%d", i);
// }
