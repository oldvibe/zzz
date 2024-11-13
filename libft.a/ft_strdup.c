#include <stdlib.h>
#include <string.h>
#include "libft.h"
char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;
	int		c;

	i = 0;
	c = strlen(s1) + 1;
	if (!s1)
		return (NULL);
	ptr = (char *)malloc(c * sizeof(char));
	if (!ptr)
		return (ptr);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}