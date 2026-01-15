/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_printf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:05:29 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/08 01:26:19 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#ifndef HEX
# define HEX "0123456789abcdef"
#endif

int	fd_putchar_m(int fd, int c)
{
	write(fd, &c, 1);
	return (1);
}

int	fd_putstr_m(int fd, char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (fd_putstr_m(fd, "(null)"));
	while (str[i] != '\0')
		i += fd_putchar_m(fd, str[i]);
	return (i);
}

int	fd_putint(int fd, int nbr)
{
	int		i;
	long	nb;

	i = 0;
	nb = (long)nbr;
	if (nb < 0)
	{
		nb = -nb;
		i += fd_putchar_m(fd,'-');
	}
	if (nb > 9)
		i += fd_putint(fd, nb / 10);
	i += fd_putchar_m(fd, (nb % 10) + '0');
	return (i);
}

int	fd_putint_unsigned(int fd, int nbr)
{
	int				i;
	unsigned int	nb;

	i = 0;
	nb = (unsigned)nbr;
	if (nb > 9)
		i += fd_putint(fd, nb / 10);
	i += fd_putchar_m(fd,(nb % 10) + '0');
	return (i);
}

int	fd_puthexa(int fd, unsigned long nb, int n)
{
	if (nb > 15)
		n = fd_puthexa(fd, nb / 16, n);
	n += fd_putchar_m(fd, HEX[nb % 16]);
	return (n);
}

int	fd_puthexa_upper(int fd, unsigned long nb, int n)
{
	if (nb > 15)
		n += fd_puthexa_upper(fd, nb / 16, n);
	n += fd_putchar_m(fd, ft_toupper(HEX[nb % 16]));
	return (n);
}

int	fd_putptr(int fd, void *ptr)
{
	int				count;
	unsigned long	nb;

	nb = (unsigned long)ptr;
	if (!ptr)
		return (fd_putstr_m(fd, "(nil)"));
	count = fd_putstr_m(fd, "0x");
	return (ft_puthexa(nb, count));
}

