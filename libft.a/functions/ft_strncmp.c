
#include <string.h>

int  ft_strncmp(const char *s1,  const char *s2, size_t n)
{
    size_t i;
    unsigned char *x;
    unsigned char *y;

    i = 0;
    x = (const char *)s1;
    y = (const char *)s2;
        if (n == 0) 
        {
            return 0;
        }
        while (i < n && (*x != '\0'|| *y != '\0'))
        {
            if (*x != *y)
            {
                return (*x - *y);
            }
            i++;
            x++;
            y++;

        }
        return (0);
}