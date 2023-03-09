/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_int_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 18:42:11 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/09 21:24:20 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void init_stack(t_stack **head, int number)
{
    t_stack *new = malloc(sizeof(t_stack));
    if (new == NULL)
        exit(1);
    new->value = number;
    new->next = NULL;
    
    if (*head == NULL)
    {
        *head = new;
        return;
    }
    
    t_stack *curr = *head;
    while (curr->next != NULL)
        curr = curr->next;
    curr->next = new;
}

void print_list(t_stack *head)
{
    t_stack *tmp = head;
    while (tmp != NULL)
    {
        ft_printf("%d -> ", tmp->value);
        tmp = tmp->next;
    }
    puts(" NULL");
}