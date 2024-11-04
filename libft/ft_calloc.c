/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 21:55:42 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/17 00:21:40 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/* int main()
{
	int *ptr;
	int	i = 0;

	ptr = ft_calloc(10, sizeof(int));
	if (ptr == NULL)
		return (1);
	while(i < 10)
	{
		printf("%d\n", ptr[i]);
		i++;
	}
	free(ptr);
	return(0);
} */