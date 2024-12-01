/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:51:35 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/17 13:51:37 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	len_s;
	size_t	i;

	i = 0;
	if (!s)
		return (ft_strdup(""));
	while (ft_strchr(set, s[i]) && s[i])
	{
		i++;
	}
	len_s = ft_strlen(s);
	while (ft_strchr(set, s[len_s - 1]) && len_s > i)
	{
		len_s--;
	}
	return (ft_substr(s, i, len_s - i));
}
