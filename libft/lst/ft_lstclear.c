/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:22:48 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/20 18:12:32 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*pos;

	if (!del || !lst || !*lst)
		return ;
	while (*lst)
	{
		pos = (*lst)-> next;
		ft_lstdelone(*lst, del);
		*lst = pos;
	}
	lst = NULL;
}

/* void del(void *content)
{
    free(content);
}
void	print_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("%s -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int main()
{
    t_list *list = ft_lstnew(strdup("Node 1"));
    list->next = ft_lstnew(strdup("Node 2"));
    list->next->next = ft_lstnew(strdup("Node 3"));


	print_list(list);
	ft_lstclear(&list,del);
	print_list(list);
	return(0);
} */