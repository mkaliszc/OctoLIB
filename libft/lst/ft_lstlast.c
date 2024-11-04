/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:26:10 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/20 18:56:18 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == NULL)
		return (NULL);
	while (lst -> next != NULL)
		lst = lst -> next;
	return (lst);
}

/* int main()
{
    t_list *list = ft_lstnew(strdup("Node 1"));
    list->next = ft_lstnew(strdup("Node 2"));
    list->next->next = ft_lstnew(strdup("Node 3"));

	char *str = ft_lstlast(list) -> content;
	printf("%s\n",str);
	return(0);
} */