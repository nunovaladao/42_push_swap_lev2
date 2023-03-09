/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 17:44:27 by nsoares-          #+#    #+#             */
/*   Updated: 2023/03/09 21:24:59 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>

typedef struct s_stack
{
    int *stack;
    int value;
    int len;
    int position;
    struct s_stack *next;
}   t_stack;

int check_args(int ac, char **av);
t_stack	*ft_lstnew_push(int value);
t_stack	*ft_lstlast_push(t_stack *lst);
void init_stack(t_stack **head, int number);
void print_list(t_stack *head);
int sort(int ac, char **av);

# endif