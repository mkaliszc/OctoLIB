/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:26:02 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/20 17:59:53 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*pos;

	if (new == NULL)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	pos = *lst;
	while (pos -> next != NULL)
		pos = pos -> next;
	pos -> next = new;
}
/* void	print_list(t_list *lst)
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
	t_list *test = NULL;
	t_list *new_node1;
	t_list *new_node2;

	new_node1 = ft_lstnew("Node 1");
	new_node2 = ft_lstnew("Node 2");
	
	ft_lstadd_back(&test, new_node1);
	ft_lstadd_back(&test, new_node2);
	print_list(test);
	return(0);
} */