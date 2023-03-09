/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:43:40 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/09 21:44:58 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
    t_stack *a = NULL;
    t_stack *b = NULL;
    
    if (ac == 1)
        return (1);
    if (check_args(ac, av) == 1)
        solve_errors("Error");
    init_stack(&a, ft_atoi(*av));
    init_stack(&b, ft_atoi(*av));
    sort(ac, av);
    //print_list(a);
    return (0);
}