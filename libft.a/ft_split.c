#include "libft.h"
#include <stdio.h>

int	wordscount(char const *s, char c)
{
	int	i;
	int	vw;

	i = 0;
	vw = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			vw++;
		while (s[i] != c && s[i])
		{
			i++;
		}
	}
	return (vw);
}

char	**eamarli(char const *s, char **m, char c, int wc)
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
	m = eamarli(s, m, c, wc);
	return (m);
}