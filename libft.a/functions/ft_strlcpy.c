#include <string.h>
size_t	ft_strlcpy(char *dest, const char *src, size_t destsize)
{
    size_t  i;

    i = 0;
    if (destsize != 0)
    {
        while (i <= destsize && src[i])
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (strlen(src));
}

// #include <stdio.h>
// int main()
// {
//     char dest[100] = "Hello, ";
//     char src[] = "World!";
//     printf("%zu\n", ft_strlcpy(dest, src, sizeof(dest)));
//     printf("dest == %s\n", dest);

//     return 0;
// }