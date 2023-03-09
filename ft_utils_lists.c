/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_lists.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/04 23:34:46 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/05 21:36:34 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstnew_push(int value)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	if (new)
	{
		new ->value = value;
		new ->next = NULL;
	}
	return (new);
}

t_stack	*ft_lstlast_push(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}


/* int main(int ac, char **av)
{
    t_stack *list = NULL;
    t_stack *new_node;
    (void)ac;
    
    new_node = ft_lstnew_push(ft_atoi(av[1]));
    if (new_node)
        list = new_node;

    new_node = ft_lstnew_push(ft_atoi(av[2]));
    if (new_node)
        ft_lstlast_push(list)->next = new_node;

    new_node = ft_lstnew_push(ft_atoi(av[3]));
    if (new_node)
        ft_lstlast_push(list)->next = new_node;

    for (t_stack *curr = list; curr != NULL; curr = curr->next)
        printf("%d ->", curr->value);
    printf(" NULL");
    return (0);
} */