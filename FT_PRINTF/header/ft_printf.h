/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:42:25 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/26 21:42:27 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_handle_format(char format, va_list args);
int	ft_handle_char(va_list args);
int	ft_handle_string(va_list args);
int	ft_handle_int(va_list args);
int	ft_handle_uint(va_list args);
int	ft_handle_ptr(va_list args);
int	ft_handle_hex(va_list args, int uppercase);

#endif
