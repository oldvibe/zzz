/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 21:40:27 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/26 21:40:30 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_string(va_list args)
{
	char	*str;
	int		count;

	str = va_arg(args, char *);
	count = 0;
	if (!str)
		str = "(null)";
	while (str[count])
		count += write(1, &str[count], 1);
	return (count);
}
