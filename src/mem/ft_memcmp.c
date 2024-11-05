/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:08:10 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/04 23:36:21 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	index = 0;
	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	while (index < n)
	{
		if (cast_s1[index] != cast_s2[index])
			return (cast_s1[index] - cast_s2[index]);
		index++;
	}
	return (0);
}
