/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:42:11 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/15 14:57:59 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void create_stack(t_stack **stack, int number)
{
    t_stack *new = malloc(sizeof(t_stack));
    if (new == NULL)
        exit(1);
    new->value = number;
    new->next = NULL;
    
    if (*stack == NULL)
    {
        *stack = new;
        return;
    }
    
    t_stack *curr = *stack;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = new;
}

void init_stack_a(char **av, t_stack **stack_a)
{
    int n;

    n = 1;
    while (av[n])
        create_stack(stack_a, ft_atoi(av[n++]));
    if (is_sorted(stack_a))
        exit(EXIT_SUCCESS);
}