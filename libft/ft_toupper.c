/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkaliszc <mkaliszc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 14:11:06 by mkaliszc          #+#    #+#             */
/*   Updated: 2024/10/15 14:59:07 by mkaliszc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	else
		return (c);
}

/* int	main()
{
	printf("%d\n", ft_toupper(' '));
	printf("%d\n", ft_toupper('C'));
	printf("%d\n", toupper(' '));
	printf("%d\n", toupper('c'));
	return(0);
} */