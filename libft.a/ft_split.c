#include "libft.h"
#include <stdio.h>

int	wordscount(char const *str, char c)
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

char	**stockstrings(char const *s, char **m, char c, int wc)
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

	wc = wordscount(s, c);
	m = (char **)malloc(sizeof(char *) * (wordscount(s, c) + 1));
	if (!m)
		return (0);
	m = stockstrings(s, m, c, wc);
	return (m);
}