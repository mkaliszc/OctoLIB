/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:01:30 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/15 21:02:23 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*cast_dest;
	const unsigned char	*cast__src;

	cast_dest = (unsigned char *)dest;
	cast__src = (const unsigned char *)src;
	if (cast_dest < cast__src)
	{
		i = 0;
		while (i < n)
		{
			cast_dest[i] = cast__src[i];
			i++;
		}
	}
	else if (cast__src < cast_dest)
	{
		i = n;
		while (0 < i)
		{
			cast_dest[i - 1] = cast__src[i - 1];
			i--;
		}
	}
	return (dest);
}

/* int main()
{
	char test[]= "Hello, World!";
	char test2[]= "Hello, World!";

	ft_memmove(test + 7, test, 6);
	printf("test 1 :%s\n", test);
	memmove(test2 + 7 , test2 , 6);

	printf("%s\n", test2);
	printf("%p\n", memmove(test + 7, test, 6));
	return(0); 
} */