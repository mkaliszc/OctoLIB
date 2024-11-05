/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 04:15:20 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/04 23:38:57 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_number(int num)
{
	int			count;
	long int	n;

	count = 0;
	n = num;
	if (n != 0)
	{
		if (n < 0)
		{
			n *= -1;
			count++;
		}
		while (n > 0)
		{
			n /= 10;
			count++;
		}
	}
	else
		count = 1;
	return (count);
}

char	*ft_itoa(int n)
{
	size_t		i;
	char		*return_value;
	long int	nbr;

	i = ft_count_number(n);
	nbr = n;
	return_value = malloc(sizeof(char) * (i + 1));
	if (return_value == NULL)
		return (NULL);
	if (nbr < 0)
	{
		return_value[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		return_value[0] = '0';
	return_value[i--] = '\0';
	while (nbr)
	{
		return_value[i] = ((nbr % 10) + '0');
		nbr /= 10;
		i--;
	}
	return (return_value);
}
