/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:42:45 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/16 21:42:50 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*d;

	d = dst;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		*(unsigned char *)d++ = *(unsigned char *)src++;
		n--;
	}
	return (dst);
}
