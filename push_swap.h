/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 13:53:39 by mcreus            #+#    #+#             */
/*   Updated: 2023/05/09 15:47:46 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}		t_list;

void	ft_error(char *msg);
void	make_top(t_list **stack, int pos);
void	print_resultat(t_list **stack_a, t_list **stack_b);
int		is_sorted(t_list **stack);
int		get_pos(t_list **stack, int index);
void	ft_free(char **str);
void	free_stack(t_list **stack);
void	ft_check_args(int ac, char **av);
void	index_stack(t_list **stack);
int		push(t_list **stack_to, t_list **stack_from);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);
int		swap(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		reverse_rotate(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);
void	sort_3(t_list **stack_a);
void	sort_3b(t_list **stack_a);
void	sort_4(t_list **stack_a, t_list **stack_b);
void	sort_5(t_list **stack_a, t_list **stack_b);
void	short_size_sort(t_list **stack_a, t_list **stack_b);
void	radix_sort(t_list **stack_a, t_list **stack_b);
int		main(int ac, char **av);
t_list	*ft_lstnew(int content);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
//int		commandes(char *line, t_list **stack_a, t_list **stack_b);
//int		commandes_2(char *line, t_list **stack_a, t_list **stack_b);
//int		commandes_3(char *line, t_list **stack_a, t_list **stack_b);
//void	print_resultat(t_list **stack_a, t_list **stack_b);

#endif
