/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:38:48 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/17 13:49:12 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void free_stacks(t_stack **stack_a, t_stack **stack_b)
{
    t_stack *tmp1;
    t_stack *tmp2;

    tmp1 = *stack_a;
    tmp2 = *stack_b;

    while (tmp1)
    {
        tmp1 = tmp1->next;
        free(tmp1);
    }
    while (tmp2)
    {
        tmp2 = tmp2->next;
        free(tmp2);
    }
}