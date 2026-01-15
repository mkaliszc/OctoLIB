/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 20:41:58 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/08 01:26:38 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	fd_handle_format(int fd, va_list arg, const char str)
{
	int	count;

	count = 0;
	if (str == 'c')
		count = fd_putchar_m(fd, va_arg(arg, int));
	else if (str == 's')
		count = fd_putstr_m(fd, va_arg(arg, char *));
	else if (str == 'p')
		count = fd_putptr(fd, va_arg(arg, void *));
	else if (str == 'd' || str == 'i')
		count = fd_putint(fd, va_arg(arg, int));
	else if (str == 'u')
		count = fd_putint_unsigned(fd, va_arg(arg, unsigned int));
	else if (str == 'x')
		count = fd_puthexa(fd, va_arg(arg, unsigned int), count);
	else if (str == 'X')
		count = fd_puthexa_upper(fd, va_arg(arg, unsigned int), count);
	else if (str == 'l')
		count = fd_putlong(fd, va_arg(arg, long));
	else if (str == '%')
		count = fd_putchar_m(fd, '%');
	return (count);
}

int	printf_fd(int fd, const char *str, ...)
{
	size_t		i;
	int			return_value;
	va_list		arg;

	i = 0;
	return_value = 0;
	va_start(arg, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			return_value += fd_handle_format(fd, arg, str[i]);
		}
		else
		{
			write(fd, &str[i], 1);
			return_value++;
		}
		i++;
	}
	va_end(arg);
	return (return_value);
}
