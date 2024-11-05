/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:03:10 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/11/05 02:58:27 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
int		ft_putchar_m(int c);
int		ft_putstr_m(char *str);
int		ft_putptr(void *ptr);
int		ft_putint(int nbr);
int		ft_putint_unsigned(int nbr);
int		ft_puthexa_upper(unsigned long nb, int n);
int		ft_puthexa(unsigned long nb, int n);

#endif