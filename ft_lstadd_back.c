/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: netheloo <netheloo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 16:56:30 by netheloo          #+#    #+#             */
/*   Updated: 2026/03/25 18:22:14 by netheloo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<stdio.h>

t_list *ft_lstnew(void *content);
void ft_lstadd_front(t_list **lst, t_list *new);
t_list *ft_lstlast(t_list *lst);

void ft_lstadd_back(t_list **lst, t_list *new)
{

t_list	*last;

	if (!lst || !new)
		return;

	if (*lst == NULL)
	{
		*lst = new;
		return;
	}

	last = ft_lstlast(*lst);
	last->next = new;
}
