/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:08:12 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/14 23:44:03 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (ft_strlen(src));
	while (i < n - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (ft_strlen(src));
}

/* int main()
{
	char des[20];
	const char test[] = "Hello, World!";
	size_t	i = ft_strlcpy(des, test, 10);

	printf("mine : %s\n", des);
	printf("       %ld\n", i);
	return(0);
} */