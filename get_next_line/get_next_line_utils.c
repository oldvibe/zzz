/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 21:51:33 by yanait-e          #+#    #+#             */
/*   Updated: 2024/12/01 21:51:36 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = (char)c;
	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == c)
		{
			return (((char *)s) + i);
		}
		i++;
	}
	if (s[i] == c)
		return (((char *)s) + i);
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*b;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	b = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!b)
		return (NULL);
	while (s1[j])
	{
		b[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
	{
		b[i++] = s2[j++];
	}
	b[i] = '\0';
	return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_str;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	new_str = (char *)malloc(len + 1);
	if (!new_str)
		return (NULL);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		new_str[j++] = s[i++];
	new_str[j] = '\0';
	return (new_str);
}

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;
	int		c;

	i = 0;
	c = ft_strlen(s1) + 1;
	ptr = (char *)malloc(c * sizeof(char));
	if (!ptr)
		return (ptr);
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
