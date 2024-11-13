#include <string.h>
#include "libft.h"
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	void	*d;
	//int		i;

	d = dst;
	//i = 0;
	if (!dst && !src)
		return (NULL);
	while (n > 0)
	{
		*(unsigned char *)d++ = *(unsigned char *)src++;
		n--;
	}
	return (dst);
}