#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	len_s;
	size_t	i;
	//size_t	j;

	i = 0;
	//j = i;
	if (!*s)
		return (ft_strdup(""));
	while (strchr(set, s[i]) && s[i])
	{
		i++;
	}
	len_s = strlen(s);
	while (strchr(set, s[len_s - 1]) && len_s > i)
	{
		len_s--;
	}
	return (ft_substr(s, i, len_s - i));
}