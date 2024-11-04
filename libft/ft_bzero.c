/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:27:51 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/15 23:56:26 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*d;

	i = 0;
	d = (unsigned char *)s;
	while (i < n)
	{
		d[i] = '\0';
		i++;
	}
}
/*
int main()
{
    char    test[]= "Hello";
    int i = 0;
    
    printf("%s\n", test);
    ft_bzero(test, 3);
    while (i < 6)
    {
        if (test[i] != '\0')
            printf("%c", test[i]);
        i++;
    }
    return(0);
}*/
