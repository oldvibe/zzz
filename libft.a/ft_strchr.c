#include <string.h>
#include "libft.h"
char	*ft_strchr(const char *s, int c)
{
	int	i;

	c = (char)c;
	i = 0;
	while (s[i] != '\0')
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