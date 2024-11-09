/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:05:03 by aakritah          #+#    #+#             */
/*   Updated: 2024/11/09 14:33:05 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *t, ...);

//  function :
int		ft_putchar(char c);
int		ft_putstr(const char *s);

// helpers :
char	*ft_itoa(int n);
char	*ft_strdup(const char *s1);
size_t	ft_strlen(const char *s);
void	ft_putnbr(int n);

#endif