/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:51:59 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/17 01:17:13 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	while (0 < n)
	{
		if (s1[index] != s2[index] || s1[index] == '\0' || s2[index] == '\0')
			return ((unsigned char)s1[index] - (unsigned char)s2[index]);
		index++;
		n--;
	}
	return (0);
}

/* int main()
{
	char test[] = "Helo";
	char test2[] = "Helo"; 

	printf("%d\n", ft_strncmp("abcdef","abc\375xx", 5));
	printf("%d\n", strncmp("abcdef","abc\375xx", 5));
	return(0);
} */