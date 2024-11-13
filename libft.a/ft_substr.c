#include "libft.h"

char	*subsghira(char const *s1, char *b1, unsigned int st, size_t l)
{
	size_t	i;

	i = 0;
	while (i < l)
	{
		b1[i] = s1[st];
		st++;
		i++;
	}
	b1[i] = '\0';
	return (b1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*b;
	size_t	i;
	size_t	lens;
	size_t needed;

	b = NULL;
	i = 0;
	needed = ft_strlen(s);
	if (len > needed)
		len = needed;
	lens = needed;
	b = malloc (len + 1);
	if (!b)
		return (0);
	while (len-- && start < lens)
	{
		b[i] = s[start];
		i++;
		start++;
	}
	b[i] = 0;
	return (b);
}