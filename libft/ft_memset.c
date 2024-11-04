/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:22:32 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/20 19:04:16 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)s;
	while (i < n)
	{
		d[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/* int main()
{
    char test[10];
    
    ft_memset(test, 'A', 10);
    test[10] = '\0';
    printf("%s", test);
}

note : unisgned char plus petit attribuable
*/