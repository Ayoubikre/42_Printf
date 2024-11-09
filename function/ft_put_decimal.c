/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_decimal.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:16:49 by aakritah          #+#    #+#             */
/*   Updated: 2024/11/09 19:00:19 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

// void	ft_putnbr(int n)
// {
// 	if (n == -2147483648)
//     {
// 		ft_putstr("-2147483648");
//         return ;
//     }
//     else if (n < 0)
// 	{
// 		ft_putchar('-');
// 		n *= -1;
// 	}
// 	if (n > 9)
// 		ft_putnbr(n / 10);
// 	ft_putchar(n % 10 + '0');
// // }

// int	ft_put_decimal(char n, va_list ptr)
// {
// 	char	*t;
// 	unsigned int	count;

// 	count = 0;
// 	if (n == 'i' || n == 'd')
// 	{
// 		t = ft_itoa(va_arg(ptr, int));
// 		count = ft_putstr(t);
// 		free(t);
// 		return ((int)count);
// 	}
//     t=ft_itoa2(va_arg(ptr,unsigned int));
//     count 
// }
