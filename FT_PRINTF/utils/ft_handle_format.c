/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_format.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:44:37 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/26 21:44:40 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_format(char format, va_list args)
{
	if (format == 'c')
		return (ft_handle_char(args));  
	else if (format == 's')
		return (ft_handle_string(args));
	else if (format == 'p')
		return (ft_handle_ptr(args));
	else if (format == 'd' || format == 'i')
		return (ft_handle_int(args));
	else if (format == 'u')
		return (ft_handle_uint(args));
	else if (format == 'x')
		return (ft_handle_hex(args, 0));
	else if (format == 'X')
		return (ft_handle_hex(args, 1));
	else if (format == '%')
		return (write(1, "%", 1));
	return (0);
}
