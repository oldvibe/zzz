#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	j;
	size_t	len_d;
	size_t	len_s;

	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	j = 0;
	if (dst == 0 && dstsize == 0)
		return (len_s);
	if ((len_d >= dstsize) || dstsize == 0)
		return (len_s + dstsize);
	while (src[j] != '\0' && j + len_d < dstsize - 1)
	{
		dst[j + len_d] = src[j];
		j++;
	}
	dst[j + len_d] = '\0';
	return (len_s + len_d);
}