/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 12:17:24 by mcreus            #+#    #+#             */
/*   Updated: 2023/05/11 15:22:55 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	commandes(char *line, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strcmp(line, "ra")))
	{
		rotate(stack_a);
		return (0);
	}
	if (!(ft_strcmp(line, "sb")))
	{
		swap(stack_b);
		return (0);
	}
	if (!(ft_strcmp(line, "ss")))
	{
		swap(stack_a);
		swap(stack_b);
		return (0);
	}
	if (!(ft_strcmp(line, "pa")))
	{
		push(stack_a, stack_b);
		return (0);
	}
	return (commandes_2(line, stack_a, stack_b));
}

int	commandes_2(char *line, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strcmp(line, "pb")))
	{
		push(stack_b, stack_a);
		return (0);
	}
	if (!(ft_strcmp(line, "sa")))
	{
		swap(stack_a);
		return (0);
	}
	if (!(ft_strcmp(line, "rb")))
	{
		rotate(stack_b);
		return (0);
	}
	if (!(ft_strcmp(line, "rr")))
	{
		rotate(stack_a);
		rotate(stack_b);
		return (0);
	}
	return (commandes_3(line, stack_a, stack_b));
}

int	commandes_3(char *line, t_list **stack_a, t_list **stack_b)
{
	if (!(ft_strcmp(line, "rra")))
	{
		reverse_rotate(stack_a);
		return (0);
	}
	if (!(ft_strcmp(line, "rrb")))
	{
		reverse_rotate(stack_b);
		return (0);
	}
	if (!(ft_strcmp(line, "rrr")))
	{
		reverse_rotate(stack_a);
		reverse_rotate(stack_b);
		return (0);
	}
	return (1);
}

static void	initstack(t_list **stack, int ac, char **av)
{
	t_list	*new;
	char	**args;
	int		i;

	i = 0;
	if (ac == 2)
		args = ft_split(av[1], ' ');
	else
	{
		i = 1;
		args = av;
	}
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (ac == 2)
		ft_free(args);
}

int	main(int ac, char **av)
{
	t_list	**stack_a;
	t_list	**stack_b;
	char	*line;

	if (ac < 2)
		return (0);
	stack_a = (t_list **)malloc(sizeof(t_list));
	stack_b = (t_list **)malloc(sizeof(t_list));
	*stack_a = NULL;
	*stack_b = NULL;
	ft_check_args(ac, av);
	initstack(stack_a, ac, av);
	while (get_next_line(0, &line))
	{
		if (commandes(line, stack_a, stack_b))
		{
			ft_error("Error\n");
			return (-1);
		}
		free(line);
	}
	print_resultat(stack_a, stack_b);
	return (0);
}
