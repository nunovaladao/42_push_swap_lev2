/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 19:03:17 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/09 21:02:01 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void insert_after(t_stack *Node, int value)
{
    t_stack *new_node = malloc(sizeof(t_stack));
    if (new_node == NULL)
        return;
    new_node->value = value;
    new_node->next = Node->next;
    Node->next = new_node;
}

static void insert_beginning(t_stack **head, int value)
{
    t_stack *new_node = malloc(sizeof(t_stack));
    if (new_node == NULL)
        return;
    new_node->value = value;
    new_node->next = *head;

    *head = new_node;
}

static void sort_list(t_stack **head, int value)
{
    if (*head == NULL || (*head)->value >= value)
    {
        insert_beginning(head, value);
        return;
    }
    
    t_stack *curr = *head;
    while (curr->next != NULL)
    {
        if (curr->next->value >= value)
            break;
        curr = curr->next;
    }
    insert_after(curr, value);
}

int sort(int ac, char **av)
{
    t_stack *head = NULL;
    int i = 1;
    (void)ac;
    while (av[i])
        sort_list(&head, atoi(av[i++]));
    print_list(head);

    free(head);
    return 0;
} 