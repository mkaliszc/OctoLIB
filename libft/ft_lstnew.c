/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:27:25 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/20 17:53:06 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}

/* int main(void)
{
    char *content = strdup("Hello, world!"); 
    t_list *node;

    node = ft_lstnew(content);
    if (node == NULL)
    {
        printf("Error\n");
        return (1);
    }
    printf("Content: %s\n", (char *)node->content);
    if (node->next == NULL)
        printf("end reached.\n");
    free(content);
    free(node);
    return (0);
} */
