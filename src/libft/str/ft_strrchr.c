/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:19:12 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/04 23:38:23 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	index;
	char	*ptr;
	char	*return_value;

	index = 0;
	ptr = (char *)str;
	return_value = NULL;
	while (index < (ft_strlen(str) + 1))
	{
		if (ptr[index] == (char)c)
			return_value = &ptr[index];
		index++;
	}
	return (return_value);
}
