/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:41:51 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/16 21:41:53 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count(int a)
{
	long	n;
	int		counteur;
	int		s;

	n = a;
	counteur = 0;
	s = n;
	while (s != 0)
	{
		s = s / 10;
		counteur++;
	}
	if (n < 0)
	{
		counteur++;
	}
	return (counteur);
}

char	*lzero(void)
{
	char	*ptr;

	ptr = (char *)malloc(1 + 1);
	if (!ptr)
		return (NULL);
	ptr[0] = 0 + '0';
	ptr[1] = '\0';
	return (ptr);
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*ptr;
	int		length;

	nb = n;
	length = 0;
	if (nb == 0)
		return (lzero());
	ptr = (char *)malloc((count(n) + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	if (n < 0)
	{
		ptr[length++] = '-';
		nb = -nb;
	}
	length = count(n);
	ptr[length--] = '\0';
	while (nb != 0)
	{
		ptr[length--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (ptr);
}
