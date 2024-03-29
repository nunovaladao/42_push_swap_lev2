/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:09:34 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/23 01:00:15 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort_2(t_stack **stack)
{
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}

void	sort_3(t_stack **stack)
{
	int	nb1;
	int	nb2;
	int	nb3;

	nb1 = (*stack)->value;
	nb2 = (*stack)->next->value;
	nb3 = (*stack)->next->next->value;
	if (nb1 > nb2 && nb2 > nb3)
	{
		sa(stack);
		rra(stack);
	}
	else if (nb1 < nb2 && nb2 > nb3 && nb3 > nb1)
	{
		sa(stack);
		ra(stack);
	}
	else if (nb1 > nb2 && nb3 > nb1)
		sa(stack);
	else if (nb1 > nb2 && nb2 < nb3 && nb3 < nb1)
		ra(stack);
	else if (nb1 < nb2 && nb2 > nb3 && nb3 < nb1)
		rra(stack);
}

void	sort_4(t_stack **stack_a, t_stack **stack_b)
{
	int	ps_small_nbr;

	ps_small_nbr = position_small_nbr(stack_a, small_nbr(stack_a));
	if (ps_small_nbr == 1)
		ra(stack_a);
	else if (ps_small_nbr == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (ps_small_nbr == 3)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_3(stack_a);
	pa(stack_a, stack_b);
}

void	sort_5(t_stack **stack_a, t_stack **stack_b)
{
	int	ps_small_nbr;

	ps_small_nbr = position_small_nbr(stack_a, small_nbr(stack_a));
	if (ps_small_nbr == 1)
		ra(stack_a);
	else if (ps_small_nbr == 2)
	{
		ra(stack_a);
		ra(stack_a);
	}
	else if (ps_small_nbr == 3)
	{
		rra(stack_a);
		rra(stack_a);
	}
	else if (ps_small_nbr == 4)
		rra(stack_a);
	if (is_sorted(stack_a))
		return ;
	pb(stack_a, stack_b);
	sort_4(stack_a, stack_b);
	pa(stack_a, stack_b);
}

void	sort_small(t_stack **stack_a, t_stack **stack_b)
{
	if (stack_size(stack_a) == 2)
		sort_2(stack_a);
	if (stack_size(stack_a) == 3)
		sort_3(stack_a);
	if (stack_size(stack_a) == 4)
		sort_4(stack_a, stack_b);
	if (stack_size(stack_a) == 5)
		sort_5(stack_a, stack_b);
}
