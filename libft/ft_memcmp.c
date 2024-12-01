/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 00:06:50 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/18 00:06:52 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*x;
	const unsigned char	*y;

	i = 0;
	x = s1;
	y = s2;
	if (n == 0)
	{
		return (0);
	}
	while (i < n)
	{
		if (x[i] != y[i])
		{
			return (x[i] - y[i]);
		}
		i++;
	}
	return (0);
}
