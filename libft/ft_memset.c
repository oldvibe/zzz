/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:43:26 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/16 21:43:30 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *a, int c, int len)
{
	void	*buffer;

	buffer = a;
	while (len > 0)
	{
		*(unsigned char *)buffer = (unsigned char)c;
		buffer++;
		len--;
	}
	return (a);
}
// #include <stdio.h>
// int main()
// {
// 	//char *buf;
// 	int i = 0;
// 	unsigned char *p;
// 	p = (unsigned char *)&i;
// 	ft_memset(p, 154, 1); // 666      00000010 10011010
// 		ft_memset(p + 1 , 2, 1); // -666      00000010 10011010
// 	printf("%d\n", i);

// }