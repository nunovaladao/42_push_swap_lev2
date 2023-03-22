/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 14:18:12 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/22 21:23:58 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push(t_stack **top_b, t_stack **top_a)
{
	t_stack	*tmp;

	if (*top_b == NULL)
		return ;
	tmp = *top_b;
	*top_b = (*top_b)->next;
	tmp->next = *top_a;
	*top_a = tmp;
}

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_b, stack_a);
	ft_printf("pa\n");
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	push(stack_a, stack_b);
	ft_printf("pb\n");
}

/* int main() 
{
    // Create stacks A and B
    t_stack *top_a = NULL;
    t_stack *top_b = NULL;
    
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

    t_stack *a_elem4 = malloc(sizeof(t_stack));
    a_elem4->value = 6;
    a_elem4->next = top_a;
    top_a = a_elem4;

    t_stack *a_elem5 = malloc(sizeof(t_stack));
    a_elem5->value = 5;
    a_elem5->next = top_a;
    top_a = a_elem5;

    t_stack *a_elem6 = malloc(sizeof(t_stack));
    a_elem6->value = 8;
    a_elem6->next = top_a;
    top_a = a_elem6;

    // Push some elements onto stack B
    t_stack *b_elem1 = malloc(sizeof(t_stack));
    b_elem1->value = 1;
    b_elem1->next = NULL;
    top_b = b_elem1;
    
    t_stack *b_elem2 = malloc(sizeof(t_stack));
    b_elem2->value = 2;
    b_elem2->next = top_b;
    top_b = b_elem2;
    
    t_stack *b_elem3 = malloc(sizeof(t_stack));
    b_elem3->value = 3;
    b_elem3->next = top_b;
    top_b = b_elem3;
    
    // Print the initial stacks
    printf("Initial stacks:\n");
    printf("Stack A:\n");
    for (t_stack *p = top_a; p != NULL; p = p->next) {
        printf("%d\n", p->value);
    }
    printf("Stack B:\n");
    for (t_stack *p = top_b; p != NULL; p = p->next) {
        printf("%d\n", p->value);
    }
    
    // Move the top element of B to A
    pb(&top_a, &top_b);
    pb(&top_a, &top_b);
    pb(&top_a, &top_b);
    
    // Print the updated stacks
    printf("Updated stacks:\n");
    printf("Stack A:\n");
    for (t_stack *p = top_a; p != NULL; p = p->next) {
        printf("%d\n", p->value);
    }
    printf("Stack B:\n");
    for (t_stack *p = top_b; p != NULL; p = p->next) {
        printf("%d\n", p->value);
    }
    
    return 0;
} */
