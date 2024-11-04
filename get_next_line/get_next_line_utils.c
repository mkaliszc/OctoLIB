/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:51:55 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/26 19:45:33 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	i;

	i = 0;
	if (!s)
		return (0);
	while (s[i])
		i += 1;
	return (i);
}

int	ft_strchr(char *str, int c)
{
	size_t		index;
	char		*ptr;

	index = 0;
	ptr = (char *)str;
	if (!str)
		return (0);
	while (str[index])
	{
		if (ptr[index] == (char)c)
		{
			return (1);
		}
		index++;
	}
	return (0);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;

	i = 0;
	if (!s[i])
		return (NULL);
	if (start > ft_strlen(s) || len == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;

	if (!s1)
	{
		s1 = malloc(1);
		s1[0] = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	dest = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (NULL);
	i = -1;
	j = 0;
	while (s1[++i])
		dest[i] = s1[i];
	while (s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';
	free(s1);
	return (dest);
}
