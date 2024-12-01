/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:40:57 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/26 21:41:03 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_uint(unsigned int n)
{
	int		count;
	char	digit;

	count = 0;
	if (n > 9)
		count += ft_put_uint(n / 10);
	digit = '0' + (n % 10);
	count += write(1, &digit, 1);
	return (count);
}

int	ft_handle_uint(va_list args)
{
	unsigned int	num;

	num = va_arg(args, unsigned int);
	return (ft_put_uint(num));
}
