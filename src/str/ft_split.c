/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 02:24:51 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/04 23:39:04 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	my_bool;

	my_bool = 0;
	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && !my_bool)
		{
			my_bool = 1;
			count++;
		}
		if (s[i] == c)
		{
			my_bool = 0;
		}
		i++;
	}
	return (count);
}

static void	ft_free_all(char **tab, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	i;
	size_t	len;
	size_t	nbr_words;

	nbr_words = ft_count_words(s, c);
	tab = (char **)malloc(sizeof(char *) * (nbr_words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < nbr_words)
	{
		while (*s == c)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		tab[i] = ft_substr(s, 0, len);
		if (!tab[i])
			return (ft_free_all(tab, i), NULL);
		s += len;
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
