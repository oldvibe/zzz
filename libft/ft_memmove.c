/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:43:09 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/16 21:43:12 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destination;
	char	*source;

	destination = (char *)dst;
	source = (char *)src;
	if (!dst && !src)
		return (NULL);
	if (source < destination)
	{
		destination = &destination[len - 1];
		source = &source[len - 1];
		while (len--)
		{
			*destination-- = *source--;
		}
	}
	else
	{
		ft_memcpy(destination, source, len);
	}
	return (dst);
}
