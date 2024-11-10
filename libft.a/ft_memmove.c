#include "libft.h"
#include <stdio.h>
#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    char *cp;
    char *s;

    cp = (char *)dst;  // Cast to char * for pointer arithmetic
    s = (char *)src;   // Cast to char * for pointer arithmetic

    if (!dst && !src)
        return (0);

    if (s < cp)  // src is before dst in memory, move backwards
    {
        cp = &cp[len - 1];  // Move cp to the last byte
        s = &s[len - 1];    // Move s to the last byte
        while (len--) {
            *cp-- = *s--;  // Copy bytes backwards
        }
    }
    else  // Move forwards
    {
        while (len--) {
            *cp++ = *s++;  // Copy bytes forwards
        }
    }
    return (dst);
}
