/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:43:40 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/14 16:47:28 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack *a = NULL;
	t_stack *b = NULL;
	int i = 1;
	if (ac == 1)
		return (1);
	if (check_args(ac, av) == 1)
		solve_errors("Error");
	while (av[i])
		init_stack(&a, ft_atoi(av[i++]));
	if (is_sorted(&a))
		ft_printf("Stack already sorted!\n");
	//sort(ac, av);
	//ft_printf("Stack size: %d\n", stack_size(&a));

	sort_small(&a, &b);
	
	puts("");
	printf("Stack A:\n");
	print_list(a);
	puts("");
	printf("Stack B:\n");
	print_list(b);
	return (0);
}
