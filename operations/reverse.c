/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 13:41:16 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/11 16:10:33 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	reverse_rotate(t_stack **stack)
{
	t_stack	*tail;
	t_stack	*second_last;

	if (*stack && (*stack)->next)
	{
		tail = *stack;
		second_last = NULL;
		while (tail->next != NULL)
		{
			second_last = tail;
			tail = tail->next;
		}
		second_last->next = NULL;
		tail->next = *stack;
		*stack = tail;
	}
}

void	rra(t_stack **stack_a)
{
	reverse_rotate(stack_a);
	ft_printf("rra\n");
}

void	rrb(t_stack **stack_b)
{
	reverse_rotate(stack_b);
	ft_printf("rrb\n");
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
	ft_printf("rrr\n");
}

/* int main() 
{
    // Create stacks A and B
    t_stack *top_a = NULL;
    
    // Push some elements onto stack A
    t_stack *a_elem1 = malloc(sizeof(t_stack));
    a_elem1->value = 3;
    a_elem1->next = NULL;
    top_a = a_elem1;

    t_stack *a_elem2 = malloc(sizeof(t_stack));
    a_elem2->value = 2;
    a_elem2->next = top_a;
    top_a = a_elem2;

    t_stack *a_elem3 = malloc(sizeof(t_stack));
    a_elem3->value = 1;
    a_elem3->next = top_a;
    top_a = a_elem3;
    
    // Print the initial stacks
    printf("Initial stack:\n");
    printf("Stack A:\n");
    for (t_stack *p = top_a; p != NULL; p = p->next) {
        printf("%d\n", p->value);
    }
    
    // Move the top element of B to A
    reverse_rotate(&top_a);
    
    // Print the updated stacks
    printf("Updated stack:\n");
    printf("Stack A:\n");
    for (t_stack *p = top_a; p != NULL; p = p->next) {
        printf("%d\n", p->value);
    } 
    
    return 0;
}  */
