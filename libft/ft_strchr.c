/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:59:16 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/16 23:26:02 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t		index;
	char		*ptr;

	index = 0;
	ptr = (char *)str;
	while (index < (ft_strlen(str) + 1))
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
	//char test[] = "Hello, world";
	
	//printf("%s\n", ft_strchr("", '\0'));
	printf("%s\n", strchr("", '\0'));
	return(0);
} */