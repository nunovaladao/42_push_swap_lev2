/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:43:40 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/19 00:23:42 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack *stack_a = NULL;
	t_stack *stack_b = NULL;
	
	if (ac == 1)
		return (1);
	if (check_args(ac, av) == 1)
		solve_errors("Error");
	init_stack_a(av, &stack_a);
	if (stack_size(&stack_a) <= 5)
		sort_small(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b);
	
	puts("");
	ft_printf("Stack A:\n");
	print_list(stack_a);
	puts("");
	ft_printf("Stack B:\n");
	print_list(stack_b);

	free_stacks(&stack_a, &stack_b);
	return (0);
}
