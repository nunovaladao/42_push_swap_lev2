/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 00:36:04 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/21 15:50:01 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

bool	is_sorted(t_stack **stack)
{
	t_stack	*tmp;

	tmp = *stack;
	while (tmp->next != NULL)
	{
		if (tmp->value > tmp->next->value)
			return (false);
		tmp = tmp->next;
	}
	return (true);
}

int	stack_size(t_stack **stack)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *stack;
	while (tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}

void	print_list(t_stack *stack)
{
	t_stack	*tmp;

	tmp = stack;
	while (tmp != NULL)
	{
		ft_printf("%d\n", tmp->value);
		tmp = tmp->next;
	}
}

int	small_nbr(t_stack **stack)
{
	int		nb;
	t_stack	*tmp;

	tmp = *stack;
	nb = (*stack)->value;
	while (tmp->next)
	{
		if (nb > tmp->next->value)
			nb = tmp->next->value;
		tmp = tmp->next;
	}
	return (nb);
}

int	position_small_nbr(t_stack **stack, int nb)
{
	int		distance;
	t_stack	*tmp;

	distance = 0;
	tmp = *stack;
	while (tmp)
	{
		if (tmp->value == nb)
			break ;
		distance++;
		tmp = tmp->next;
	}
	return (distance);
}
