/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:03:05 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/21 20:57:19 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	get_position(t_stack **stack_a)
{
	static int		size;
	int		n_min;
	t_stack	*tmp;

	n_min = INT_MAX;
	tmp = *stack_a;
	while (*stack_a)
	{
		if ((*stack_a)->flag == 0)
			if ((*stack_a)->value < n_min)
				n_min = (*stack_a)->value;
		*stack_a = (*stack_a)->next;
	}
	*stack_a = tmp;
	while (*stack_a)
	{
		if ((*stack_a)->flag == 0 && (*stack_a)->value == n_min)
		{
			(*stack_a)->value = size;
			(*stack_a)->flag = 1;
		}
		*stack_a = (*stack_a)->next;
	}
	size++;
	*stack_a = tmp;
}

void	get_all_positions(t_stack **stack_a)
{
	int	size;

	size = -1;
	while (++size < stack_size(stack_a))
		get_position(stack_a);
}
