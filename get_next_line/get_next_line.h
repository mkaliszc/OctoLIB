/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:24:27 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/24 18:52:57 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

size_t	ft_strlen(char *s);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *str, int c);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*get_next_line(int fd);

#endif