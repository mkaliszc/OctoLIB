/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 18:20:02 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/04 23:36:01 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new_lst;

	if (!lst || !del || !f)
		return (NULL);
	head = NULL;
	while (lst)
	{
		new_lst = ft_lstnew(NULL);
		if (!new_lst)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_lst -> content = f(lst -> content);
		ft_lstadd_back(&head, new_lst);
		lst = lst -> next;
	}
	return (head);
}
