/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:42:11 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/15 14:27:10 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void init_stack(t_stack **stack, int number)
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

void print_list(t_stack *head)
{
    t_stack *tmp = head;
    while (tmp != NULL)
    {
        ft_printf("%d\n", tmp->value);
        tmp = tmp->next;
    }
}