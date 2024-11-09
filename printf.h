/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:17:17 by aakritah          #+#    #+#             */
/*   Updated: 2024/11/08 21:50:36 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *t, ...);


//  function :
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);

// helpers :
char				*ft_itoa(int n);
char				*ft_strdup(const char *s1);
size_t				ft_strlen(const char *s);



#endif