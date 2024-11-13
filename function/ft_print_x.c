/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_x.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 21:53:09 by aakritah          #+#    #+#             */
/*   Updated: 2024/11/13 12:30:16 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_putnbrx(unsigned int i, int f)
{
	int	count;

	count = 0;
	if (i >= 16)
		count += ft_putnbrx(i / 16, f);
	if (10 <= i % 16 && i % 16 <= 15)
	{
		if (f == 1)
			ft_putchar((i % 16) - 10 + 'A');
		else
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

int	ft_print_x(char n, va_list ptr)
{
	int				f;
	unsigned int	i;

	f = 0;
	if (n == 'X')
		f = 1;
	i = va_arg(ptr, unsigned int);
	return (ft_putnbrx(i, f));
}
