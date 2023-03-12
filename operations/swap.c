/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:01:38 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/10 14:12:47 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void swap(t_stack **stack)
{
    t_stack *node;
    int tmp;

    node = *stack;
    tmp = node->value;
    node->value = node->next->value;
    node->next->value = tmp;
}

void sa(t_stack **stack_a)
{
    swap(stack_a);
    ft_printf("sa\n");
}

void sb(t_stack **stack_b)
{
    swap(stack_b);
    ft_printf("sb\n");
}

void ss(t_stack **stack_a, t_stack **stack_b)
{
    swap(stack_a);
    swap(stack_b);
    ft_printf("ss\n");
}

/* int main(int ac, char **av)
{
    (void)ac;
    t_stack *top = malloc(sizeof(t_stack));
    top->value = atoi(av[1]);
    top->next = malloc(sizeof(t_stack));
    top->next->value = atoi(av[2]);
    top->next->next = NULL;

    printf("Pilha antes da troca: %d %d\n", top->value, top->next->value);

    swap(&top);

    printf("Pilha depois da troca: %d %d\n", top->value, top->next->value);
} */