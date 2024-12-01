/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:41:57 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/26 21:41:59 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_hex(unsigned int n, int uppercase)
{
	int		count;
	char	*hex_lower;
	char	*hex_upper;
	char	*hex;

	count = 0;
	hex_lower = "0123456789abcdef";
	hex_upper = "0123456789ABCDEF";
	if (uppercase == 1)
		hex = hex_upper;
	else
		hex = hex_lower;
	if (n > 15)
		count += ft_put_hex(n / 16, uppercase);
	count += write(1, &hex[n % 16], 1);
	return (count);
}

int	ft_handle_hex(va_list args, int uppercase)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	return (ft_put_hex(num, uppercase));
}
