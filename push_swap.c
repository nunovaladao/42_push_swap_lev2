/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:43:40 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/12 01:16:31 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack *a = NULL;
	//t_stack *b = NULL;
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

	printf("Stack A");
	print_list(a);
	/* puts("");
	puts("Stack B");
	print_list(b); */
	return (0);
}
