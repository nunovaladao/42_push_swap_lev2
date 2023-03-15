/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_arg_errors.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:47:56 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/08 15:42:43 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	all_args_are_numbers(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		if (av[i][j] == '-')
			j++;
		while (av[i][j] != '\0')
		{
			if (!ft_isdigit(av[i][j]))
				return (1);
			j++;
		}
		j = 0;
		i++;
	}
	return (0);
}

static int	duplicate_num(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = i + 1;
		while (j < ac)
		{
			if (ft_cmp_num(ft_atoll(av[i]), ft_atoll(av[j])) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

static int	valid_range(int ac, char **av)
{
	long long	n;
	int			i;

	i = 0;
	while (i < ac)
	{
		n = ft_atoll(av[i]);
		if (n < -2147483648 || n > 2147483647)
			return (1);
		i++;
	}
	return (0);
}

int	check_args(int ac, char **av)
{
	if (all_args_are_numbers(ac, av))
		return (1);
	if (duplicate_num(ac, av))
		return (1);
	if (valid_range(ac, av))
		return (1);
	return (0);
}
