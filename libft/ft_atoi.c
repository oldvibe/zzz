/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:39:35 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/16 21:39:38 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	check_overflow(unsigned long nbr, int new_digit, int sign)
{
	if (sign == 1)
		if ((nbr >= 922337203685477580 && new_digit > 7)
			|| (nbr >= 922337203685477581))
			return (-1);
	if (sign == -1)
		if ((nbr >= 922337203685477580
				&& new_digit > 8) | (nbr >= 922337203685477581))
			return (0);
	return (1);
}

static int	ft_space(int c)
{
	return ((c == '\n') || (c == '\t') || (c == '\v') || (c == ' ')
		|| (c == '\f') || (c == '\r'));
}

int	ft_atoi(const char *str)
{
	int				sign;
	int				i;
	unsigned long	res;
	int				overflow;

	sign = 1;
	res = 0;
	i = 0;
	while (ft_space(str[i]))
		i++;
	if ((str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		overflow = check_overflow(res, (str[i] - '0'), sign);
		if (overflow != 1)
			return (overflow);
		res = (res * 10) + str[i] - 48;
		i++;
	}
	return (res * sign);
}
