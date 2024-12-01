/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:42:29 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/16 21:42:31 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t lenght)
{
	size_t	i;

	i = 0;
	if (lenght != 0)
	{
		while (i < lenght)
		{
			if ((*(unsigned char *)s) == (unsigned char)c)
			{
				return ((void *)s);
			}
			i++;
			s++;
		}
	}
	return (NULL);
}
