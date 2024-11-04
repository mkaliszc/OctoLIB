/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:05:29 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/02 19:08:41 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_m(int c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_m(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (ft_putstr_m("(null)"));
	while (str[i] != '\0')
		i += ft_putchar_m(str[i]);
	return (i);
}

int	ft_putptr(void *ptr)
{
	int				count;
	unsigned long	nb;

	nb = (unsigned long)ptr;
	if (!ptr)
		return (ft_putstr_m("(nil)"));
	count = ft_putstr_m("0x");
	return (ft_puthexa(nb, count));
}

int	ft_putint(int nbr)
{
	int		i;
	long	nb;

	i = 0;
	nb = (long)nbr;
	if (nb < 0)
	{
		nb = -nb;
		i += ft_putchar_m('-');
	}
	if (nb > 9)
		i += ft_putint(nb / 10);
	i += ft_putchar_m((nb % 10) + '0');
	return (i);
}
