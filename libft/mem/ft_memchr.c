/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:46:17 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/17 01:09:15 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		index;
	char		*ptr;

	index = 0;
	ptr = (char *)s;
	while (index < n)
	{
		if (ptr[index] == (char)c)
		{
			return (&ptr[index]);
		}
		index++;
	}
	return (NULL);
}

/* int main()
{
	char test[] = "Hell, wrld";
	
	printf("%p\n", ft_memchr(test, 'o', 14));
	printf("%p\n", memchr(test, 'o', 14));
	return(0);
} */