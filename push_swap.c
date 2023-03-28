/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:43:40 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/23 16:48:53 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (1);
	if (check_args(ac, av) == 1)
		solve_errors("Error");
	init_stack_a(av, &stack_a);
	if (stack_size(&stack_a) <= 5)
		sort_small(&stack_a, &stack_b);
	else
		radix_sort(&stack_a, &stack_b);
	/* ft_printf("\n");
	ft_printf("Stack A:\n");
	print_list(stack_a);
	ft_printf("\n");
	ft_printf("Stack B:\n");
	print_list(stack_b); */
	free_stack(&stack_a);
	free_stack(&stack_b);
	return (0);
}
