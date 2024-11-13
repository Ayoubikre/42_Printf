/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:04:49 by aakritah          #+#    #+#             */
/*   Updated: 2024/11/13 12:33:19 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check(char n, va_list ptr)
{
	if (n == '\0')
		return (0);
	else if (n == '%')
		return (ft_print_c(n, ptr));
	else if (n == 'c')
		return (ft_print_c(n, ptr));
	else if (n == 's')
		return (ft_print_s(ptr));
	else if (n == 'd' || n == 'i' || n == 'u')
		return (ft_print_d(n, ptr));
	else if (n == 'p')
		return (ft_print_p(ptr));
	else if (n == 'x' || n == 'X')
		return (ft_print_x(n, ptr));
	ft_putchar(n);
	return (1);
}

int	ft_printf(const char *t, ...)
{
	int		i;
	int		count1;
	int		count2;
	va_list	ptr;

	count1 = 0;
	count2 = 0;
	i = 0;
	va_start(ptr, t);
	if (!t || write(1, NULL, 0) == -1)
		return (-1);
	while (t[i])
	{
		if (t[i] == '%' && i < (int)ft_strlen(t))
			count1 += ft_check(t[++i], ptr);
		else
		{
			write(1, t + i, 1);
			count2++;
		}
		i++;
	}
	va_end(ptr);
	return (count1 + count2);
}
