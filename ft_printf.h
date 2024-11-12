/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:05:03 by aakritah          #+#    #+#             */
/*   Updated: 2024/11/12 21:46:02 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *t, ...);

//  function :
int		ft_print_c(char c, va_list ptr);
int		ft_print_d(char n, va_list ptr);
int		ft_print_p(va_list ptr);
int		ft_print_s(va_list ptr);
int		ft_print_x(char n, va_list ptr);

// helpers :
void	ft_putchar(char c);
void	ft_putnbr(int n);
void	ft_putstr(const char *s);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);

#endif