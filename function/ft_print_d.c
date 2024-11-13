/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:16:49 by aakritah          #+#    #+#             */
/*   Updated: 2024/11/13 12:30:01 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

static int	ft_count1(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i++;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static int	ft_count2(unsigned int n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	while (n != 0)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static void	ft_putnbr2(unsigned int n)
{
	if (n > 9)
		ft_putnbr2(n / 10);
	ft_putchar(n % 10 + '0');
}

int	ft_print_d(char n, va_list ptr)
{
	unsigned long	i;

	if (n == 'u')
	{
		i = va_arg(ptr, unsigned int);
		ft_putnbr2(i);
		return (ft_count2(i));
	}
	i = va_arg(ptr, int);
	ft_putnbr(i);
	return (ft_count1(i));
}
