/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:41:11 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/26 21:41:13 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_put_ptr(unsigned long n)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (n > 15)
		count += ft_put_ptr(n / 16);
	count += write(1, &hex[n % 16], 1);
	return (count);
}

int	ft_handle_ptr(va_list args)
{
	void	*ptr;
	int		count;

	ptr = va_arg(args, void *);
	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	count += write(1, "0x", 2);
	count += ft_put_ptr((unsigned long)ptr);
	return (count);
}
