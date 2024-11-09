/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 19:46:49 by aakritah          #+#    #+#             */
/*   Updated: 2024/11/09 13:50:22 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_putstr(const char *s)
{
	if (!s)
	{
        write(1, "(null)", 6);
        return (6);
    }
	write(1, s, ft_strlen(s));
	return ((int)ft_strlen(s));
}