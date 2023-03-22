/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 13:38:48 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/22 13:46:51 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*head;

	head = *stack;
	while (head)
	{
		head = head->next;
		free(head);
	}
	free(stack);
}