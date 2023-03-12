/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 19:13:00 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/11 14:25:58 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void rotate(t_stack **stack)
{
    t_stack *head;
    t_stack *tail;

    if (*stack && (*stack)->next)
    {
        head = *stack;
        tail = *stack;

        while (tail->next)
            tail = tail->next;

        *stack = head->next;
        tail->next = head;
        head->next = NULL;
    }
}

void ra(t_stack **stack_a)
{
    rotate(stack_a);
    ft_printf("ra\n");
}

void rb(t_stack **stack_b)
{
    rotate(stack_b);
    ft_printf("rb\n");
}

void rr(t_stack **stack_a, t_stack **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    ft_printf("rr\n");
}

/* int main() 
{
    // Create stacks A and B
    t_stack *top_a = NULL;
    
    // Push some elements onto stack A
    t_stack *a_elem1 = malloc(sizeof(t_stack));
    a_elem1->value = 1;
    a_elem1->next = NULL;
    top_a = a_elem1;

    t_stack *a_elem2 = malloc(sizeof(t_stack));
    a_elem2->value = 2;
    a_elem2->next = top_a;
    top_a = a_elem2;

    t_stack *a_elem3 = malloc(sizeof(t_stack));
    a_elem3->value = 3;
    a_elem3->next = top_a;
    top_a = a_elem3;
    
    // Print the initial stacks
    printf("Initial stack:\n");
    printf("Stack A:\n");
    for (t_stack *p = top_a; p != NULL; p = p->next) {
        printf("%d\n", p->value);
    }
    
    // Move the top element of B to A
    rotate(&top_a);
    
    // Print the updated stacks
    printf("Updated stack:\n");
    printf("Stack A:\n");
    for (t_stack *p = top_a; p != NULL; p = p->next) {
        printf("%d\n", p->value);
    } 
    
    return 0;
} */ 