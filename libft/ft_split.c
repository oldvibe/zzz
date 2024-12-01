/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yanait-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:47:34 by yanait-e          #+#    #+#             */
/*   Updated: 2024/11/17 13:47:37 by yanait-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	wordscount(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i])
			j++;
		while (str[i] != c && str[i])
		{
			i++;
		}
	}
	return (j);
}

static char	**ft_free(char **stock)
{
	int	i;

	i = 0;
	while (stock[i])
	{
		free(stock[i]);
		i++;
	}
	free(stock);
	return (NULL);
}

static char	**stockstrings(char const *s, char **m, char c, int wc)
{
	int	i;
	int	start;
	int	end;

	i = 0;
	start = 0;
	end = 0;
	while (i < wc)
	{
		while (s[start] && s[start] == c)
			start++;
		end = start;
		while (s[end] && s[end] != c)
			end++;
		m[i] = ft_substr(s, start, end - start);
		if (!m[i])
			return (ft_free(m));
		start = end;
		i++;
	}
	m[i] = 0;
	return (m);
}

char	**ft_split(char const *s, char c)
{
	char	**m;
	int		wc;

	if (!s)
		return (NULL);
	wc = wordscount(s, c);
	m = (char **)malloc(sizeof(char *) * (wordscount(s, c) + 1));
	if (!m)
		return (NULL);
	m = stockstrings(s, m, c, wc);
	return (m);
}
