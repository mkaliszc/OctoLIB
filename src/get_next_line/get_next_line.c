/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 02:29:36 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/05 02:23:51 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef BUFFER_SIZE
# define BUFFER_SIZE 42
#endif

char	*ft_strjoin_gnl(char *s1, char *s2)
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

char	*read_line(char *buf, int fd)
{
	char	*buffer;
	int		index;

	buffer = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (buffer == NULL)
		return (NULL);
	index = 1;
	while (!ft_strchr(buf, '\n') && index > 0)
	{
		index = read(fd, buffer, BUFFER_SIZE);
		if (index == -1)
		{
			free(buf);
			free(buffer);
			return (NULL);
		}
		buffer[index] = '\0';
		buf = ft_strjoin_gnl(buf, buffer);
	}
	free (buffer);
	return (buf);
}

char	*update_line(char	*line, char *buf)
{
	char			*new_buf;
	unsigned int	len_line;

	len_line = ft_strlen(line);
	new_buf = ft_substr(buf, len_line, ft_strlen(buf) - len_line);
	free(buf);
	return (new_buf);
}

char	*get_next_line(int fd)
{
	static char	*buffer[1024];
	char		*line;
	size_t		len;

	len = 0;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer[fd] = read_line(buffer[fd], fd);
	if (!buffer[fd])
	{
		free(buffer[fd]);
		return (NULL);
	}
	while (buffer[fd][len] != '\0' && buffer[fd][len] != '\n')
		len++;
	line = ft_substr(buffer[fd], 0, len + 1);
	buffer[fd] = update_line(line, buffer[fd]);
	return (line);
}
