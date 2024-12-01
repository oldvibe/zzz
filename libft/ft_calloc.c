/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 21:40:15 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/16 21:40:19 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	c;

	c = count * size;
	ptr = (char *)malloc(c);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, c);
	return (ptr);
}
