#include "libft.h"
#include <stdlib.h>
#include <strings.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	c;
	size_t	i;

	i = 0;
	c = count * size;
	ptr = (char *)malloc(c);
	if (!ptr)
		return (NULL);
	while (i < c)
	{
		((char *)ptr)[i] = 0;
		i++;
	}
	return (ptr);
}