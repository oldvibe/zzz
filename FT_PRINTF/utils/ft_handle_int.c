/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:40:41 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/26 21:40:45 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_putnbr(int n)
{
	int		count;
	char	digit;

	count = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		count += write(1, "-", 1);
		n = -n;
	}
	if (n > 9)
		count += ft_putnbr(n / 10);
	digit = '0' + (n % 10);
	count += write(1, &digit, 1);
	return (count);
}

int	ft_handle_int(va_list args)
{
	int	num;

	num = va_arg(args, int);
	return (ft_putnbr(num));
}
