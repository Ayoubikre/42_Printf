/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:33:47 by Noctis            #+#    #+#             */
/*   Updated: 2024/11/08 21:49:45 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_check(char n, va_list ptr)
{
	int	count;

	count = 0;
	if (n == '%')
		ft_putchar('%');
	else if (n == 'c')
		ft_putchar(va_arg(ptr, int));
	else if (n == 's')
		ft_putstr(va_arg(ptr, char *));
	else if (n == 'd' || n== 'i')
		ft_putstr(ft_itoa(va_arg(ptr, int)));
	// else if (n == 'p')
	// 	ft_(va_arg(ptr, void *));
	// else if (n == 'u')
	// 	ft_putstr(ft_itoa2(va_arg(ptr, int)));
	// else if (n == 'x')
	// 	ft_puthex1(va_arg(ptr, int));
	// else if (n == 'X')
	// 	ft_puthex2(va_arg(ptr, int));
	return (count);
}

int	ft_printf(const char *t, ...)
{
	int		i;
	int		count;
	va_list	ptr;
	char	tmp;

	count = 0;
	i = 0;
	va_start(ptr, t);
	while (t[i])
	{
		if (t[i] == '%')
			count = ft_check(t[++i], ptr);
		else
			write(1, t + i, 1);
		i++;
	}
	va_end(ptr);
	return (count);
}

int	main(void)
{
	char	*t1;
	char	*t2;

	t1 = "1234";
	t2 = "1234";
	ft_printf("\nhello this is %s test %s %%", t1, t2);
}
