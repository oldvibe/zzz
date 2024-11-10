#include <string.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    if (n != 0)
    {
        while(i < n)
        {
            if ((*(char *)s) == (char)c)
            {
                return (void *)s;
            }
            i++;
            s++;
        }
    }
    return NULL;
}

#include<stdio.h>
int main()
{
    int i = 'W';
    char *str = "Hello, World!";
    printf("%p\n", ft_memchr(str, i, strlen(str)));
    return 0;
}