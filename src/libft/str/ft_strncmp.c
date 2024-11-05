/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:51:59 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/04 23:37:08 by mkaliszc         ###   ########.fr       */
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
