/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 18:01:30 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/04 23:36:31 by mkaliszc         ###   ########.fr       */
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
