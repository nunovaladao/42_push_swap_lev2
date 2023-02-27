/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsoares- <nsoares-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 18:39:00 by nsoares-          #+#    #+#             */
/*   Updated: 2022/11/19 19:07:57 by nsoares-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst && del)
	{
		while (*lst)
		{
			tmp = *lst;
			*lst = (*lst)->next;
			ft_lstdelone(tmp, del);
		}
		*lst = NULL;
	}
}

/*void	del(void *c)
{
 	free (c);
}

int		main()
{
	t_list *head;
	t_list *dois;
	t_list *tres;
	t_list *quatro;

	char *c1 = ft_strdup("Um --");
    	char *c2 = ft_strdup("Dois --");
    	char *c3 = ft_strdup("Tres --");
    	char *c4 = ft_strdup("Quatro --");

	head = ft_lstnew(c1);
	dois = ft_lstnew(c2);
	tres = ft_lstnew(c3);
	quatro = ft_lstnew(c4);

	ft_lstadd_back(&head, dois);
	ft_lstadd_back(&head, tres);
	ft_lstadd_back(&head, quatro);

	printf("\n%s	    %s	%s	    %s\n", (char *)head->content,\
	(char *)head->next->content, (char *)head->next->next->content,\
	(char *)head->next->next->next->content);
	
	printf("%p %p %p %p %p\n", head, head->next, head->next->next,\
	head->next->next->next, head->next->next->next->next);

	ft_lstclear(&head, del);

	printf("\n%p\n", head);

	return (0);
}*/
