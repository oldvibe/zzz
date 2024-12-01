/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:51:19 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/17 13:51:23 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	h;

	c = (char)c;
	h = ft_strlen(s);
	while (*s != '\0')
	{
		s++;
	}
	while (h > 0)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		h--;
		s--;
	}
	if (*s == c)
		return ((char *)s);
	return (NULL);
}
