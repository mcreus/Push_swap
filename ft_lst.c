/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/09 10:00:05 by mcreus            #+#    #+#             */
/*   Updated: 2023/05/09 10:49:22 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->value = value;
	new->index = -1;
	new->next = NULL;
	return (new);
}

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new -> next = *lst;
		*lst = new;
	}
}

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst -> next != NULL)
	{
		lst = lst ->next;
	}
	return (lst);
}

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (new == NULL)
		return ;
	ft_lstlast (*lst)-> next = new;
}

int	ft_lstsize(t_list *lst)
{
	size_t	len;

	len = 0;
	if (!lst)
		return (0);
	while (lst != NULL)
	{
		lst = lst -> next;
		len++;
	}
	return (len);
}
