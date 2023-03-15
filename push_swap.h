/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:44:27 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/14 16:48:05 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdbool.h>

typedef struct s_stack
{
	int	value;
	struct s_stack	*next;
}			t_stack;

// Check errors
int	check_args(int ac, char **av);

// Moves
void	swap(t_stack **stack);
void	sa(t_stack **stack_a);
void	sb(t_stack **stack_b);
void	ss(t_stack **stack_a, t_stack **stack_b);
void	push(t_stack **top_b, t_stack **top_a);
void	pa(t_stack **stack_a, t_stack **stack_b);
void	pb(t_stack **stack_a, t_stack **stack_b);
void	rotate(t_stack **stack);
void	ra(t_stack **stack_a);
void	rb(t_stack **stack_b);
void	rr(t_stack **stack_a, t_stack **stack_b);
void	reverse_rotate(t_stack **stack);
void	rra(t_stack **stack_a);
void	rrb(t_stack **stack_b);
void	rrr(t_stack **stack_a, t_stack **stack_b);

// List utils
t_stack	*ft_lstnew_push(int value);
t_stack	*ft_lstlast_push(t_stack *lst);
void	print_list(t_stack *head);

// Init list/stack
void	init_stack(t_stack **head, int number);

// Sort_utils
int	sort(int ac, char **av);
bool	is_sorted(t_stack **stack);
int stack_size(t_stack **stack);

// Sort
void sort_small(t_stack **stack_a, t_stack **stack_b);
void sort_2(t_stack **stack);
void sort_3(t_stack **stack);

# endif
