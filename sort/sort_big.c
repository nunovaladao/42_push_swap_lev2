/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:55:02 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/21 21:05:17 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	bigger_num_stack_a(t_stack **stack_a)
{
	t_stack	*tmp;
	int		n_big;
	int		max_bits;

	max_bits = 0;
	tmp = *stack_a;
	n_big = tmp->value;
	while (tmp)
	{
		if (tmp->value > n_big)
			n_big = tmp->value;
		tmp = tmp->next;
	}
	while ((n_big >> max_bits) != 0)
		max_bits++;
	return (max_bits);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int	size;
	int	i;
	int	j;
	int	nr_bits;

	i = -1;
	get_all_positions(stack_a);
	size = stack_size(stack_a);
	nr_bits = bigger_num_stack_a(stack_a);
	while (++i < nr_bits)
	{
		j = -1;
		while (++j < size)
		{
			if ((((*stack_a)->value >> i) & 0b00000001) == 0)
				pb(stack_a, stack_b);
			else
				ra(stack_a);
		}
		while (stack_size(stack_b) > 0)
			pa(stack_a, stack_b);
	}
}
