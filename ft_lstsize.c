/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpaganon <rpaganon@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/10 14:06:26 by rpaganon          #+#    #+#             */
/*   Updated: 2026/11/10 16:36:26 by rpaganon         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_lstsize(t_list *lst)
{
	unsigned int	i;

	i = 0;
	while (lst)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}

/*
#include <stdio.h>

int	main()
{
	t_list	*lst;
	int	cnt;

	cnt = 8;
	lst = ft_lstnew(&cnt);
	int	i = 0;
	while (i < 3){
		ft_lstadd_front(&lst, ft_lstnew(&cnt));
		i++;
	}
	printf("%u", ft_lstsize(lst));
}
*/