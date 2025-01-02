/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/02 18:00:42 by mkaliszc          #+#    #+#             */
/*   Updated: 2025/01/02 18:03:43 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free_int_tab(int **tab, int size)
{
	int	i;

	i = 0;
	if(!*tab)
		return ;
	while (i < size)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

