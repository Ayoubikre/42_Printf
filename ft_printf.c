/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:04:49 by aakritah          #+#    #+#             */
/*   Updated: 2024/11/09 21:54:03 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// static int	ft_check(char n, va_list ptr)
// {
	// if (n == '%')
	// 	return (ft_putchar('%'));
	// else if (n == 'c')
	// 	return (ft_putchar(va_arg(ptr, int)));
	// else if (n == 's')
	// 	return (ft_putstr(va_arg(ptr, char *)));
	// else if (n == 'd' || n == 'i' || n == 'u')
	// 	return(ft_putnbr(n,ptr))
	// else if (n == 'p')
	// 	ft_putptr(va_arg(ptr, void *));
	// else if (n == 'x')
	// 	ft_puthex1(va_arg(ptr, int));
	// else if (n == 'X')
	// 	ft_puthex2(va_arg(ptr, int));

	// else
	// {
	// 	ft_putchar('%');
	// 	ft_putchar(n);
	// }
	
// 	return (2);
// }

int	ft_printf(const char *t, ...)
{
	int		i;
	int		count;
	int		count2;
	va_list	ptr;

	count = 0;
	count2 = 0;
	i = 0;
	va_start(ptr, t);
	while (t[i])
	{
		if (t[i] == '%')
		{
			count += ft_check(t[++i], ptr);
			count2++;
		}
		else
			write(1, t + i, 1);
		i++;
	}
	va_end(ptr);
	return ((count + (i - (count2 * 2))));
}
