/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/28 16:24:01 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/28 19:25:20 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static t_list	*get_min(t_list **stack)
{
	t_list	*head;
	t_list	*min;
	int		stack_with_min;

	min = NULL;
	stack_with_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!stack_with_min
					|| head->value < min->value))
			{
				min = head;
				stack_with_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_stack(t_list **stack)
{
	t_list	*head;
	int		index;

	index = 0;
	head = get_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_min(stack);
	}
}
