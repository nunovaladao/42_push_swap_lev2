/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:55:02 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/19 23:27:26 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int bigger_num_stack_a(t_stack **stack_a)
{
	t_stack *tmp;
	int n_big;

	tmp = *stack_a;
	n_big = tmp->value;
	while (tmp)
	{
		if (tmp->value > n_big)
			n_big = tmp->value;
		tmp = tmp->next;
	}
	return (n_big);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	//t_stack *tmp;
	int size;
	int max_bits;
	int i;
	int j;
	int size_num;

	i = -1;
	max_bits = 0;
	size = stack_size(stack_a);
	size_num = bigger_num_stack_a(stack_a);
	while ((size_num >> max_bits) != 0)
		max_bits++;
	while (++i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			//tmp = *stack_a;
			if ((((*stack_a)->value >> i) & 0b00000001) == 1)
				ra(stack_a);
			else 
				pb(stack_a, stack_b);
		}
		while (stack_size(stack_b) != 0)
			pa(stack_a, stack_b);
	}
}