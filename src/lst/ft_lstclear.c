/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:22:48 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/04 23:35:45 by mkaliszc         ###   ########.fr       */
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
