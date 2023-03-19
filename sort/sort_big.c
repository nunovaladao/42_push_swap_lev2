/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_big.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:55:02 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/19 00:31:17 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	t_stack *tmp;
	int size;
	int max_bits;
	int i;
	int j;

	i = 0;
	max_bits = 0;
	size = stack_size(stack_a);
	while ((size >> max_bits) != 0)
		max_bits++;
	while (i <= max_bits)
	{
		j = 0;
		while (j < size)
		{
			tmp = *stack_a;
			if (((tmp->value >> i) & 0b00000001) == 1)
				ra(stack_a);
			else 
				pb(stack_a, stack_b);
			j++;
		}
		while (stack_size(stack_b) != 0)
			pa(stack_a, stack_b);
		i++;
	}
}