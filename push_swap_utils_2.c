/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 11:38:02 by mcreus            #+#    #+#             */
/*   Updated: 2023/05/09 12:04:42 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_top(t_list **stack, int pos)
{
	t_list	*head;
	int		tmp;

	if (pos == 0)
		return ;
	head = *stack;
	tmp = ft_lstsize(head) - pos;
	if (pos <= (ft_lstsize(head) / 2))
	{
		while (pos-- > 0)
			ra(stack);
	}
	else
	{
		while (tmp-- > 0)
			rra(stack);
	}
}

void	print_resultat(t_list **stack_a, t_list **stack_b)
{
	if (is_sorted(stack_a))
		ft_putendl_fd("OK\n", 1);
	else
		ft_putendl_fd("KO\n", 1);
	if (*stack_a)
		free_stack(stack_a);
	if (*stack_b)
		free_stack(stack_b);
}
