/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmore_printf.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 02:46:07 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/05 03:26:12 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef HEX
# define HEX "0123456789abcdef"
#endif

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
	n += ft_putchar_m(ft_toupper(HEX[nb % 16]));
	return (n);
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
