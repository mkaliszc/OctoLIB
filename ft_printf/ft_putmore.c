/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmore.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 02:46:07 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/03 01:22:31 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexa(unsigned long nb, int n)
{
	if (nb > 15)
		n = ft_puthexa(nb / 16, n);
	n += ft_putchar_m(HEX[nb % 16]);
	return (n);
}

int	ft_puthexa_upper(unsigned long nb, int n)
{
	if (nb > 15)
		n += ft_puthexa_upper(nb / 16, n);
	n += ft_putchar_m(HEX_UP[nb % 16]);
	return (n);
}

int	ft_putint_unsigned(int nbr)
{
	int				i;
	unsigned int	nb;

	i = 0;
	nb = (unsigned)nbr;
	if (nb > 9)
		i += ft_putint(nb / 10);
	i += ft_putchar_m((nb % 10) + '0');
	return (i);
}
