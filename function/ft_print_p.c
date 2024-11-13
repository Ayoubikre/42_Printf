/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:53:00 by aakritah          #+#    #+#             */
/*   Updated: 2024/11/13 12:30:05 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_putnbrx(unsigned long i)
{
	int	count;

	count = 0;
	if (i >= 16)
		count += ft_putnbrx(i / 16);
	if (10 <= i % 16 && i % 16 <= 15)
	{
		ft_putchar((i % 16) - 10 + 'a');
		count++;
	}
	else if (0 <= i % 16 && i % 16 <= 9)
	{
		ft_putchar((i % 16) + '0');
		count++;
	}
	return (count);
}

int	ft_print_p(va_list ptr)
{
	unsigned long	i;

	i = (unsigned long)va_arg(ptr, void *);
	ft_putstr("0x");
	return (ft_putnbrx(i) + 2);
}
