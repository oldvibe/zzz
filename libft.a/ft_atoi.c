#include "libft.h"
int ft_atoi(const char *str)
{
    int sign;
    int res;
    int i;

    sign = 0;
    res = 0;
    i = 0;
    while(str[i] || str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
    {
        i++;
    }
    while(str[i] || str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
            sign = sign? -sign : -1;
        else if(str[i] == '+')
            sign = 1;
       i++;
    }
    while (str[i] || ft_isdigit(str[i]))
    {
        res = res * 10 + (str[i] - '0');
        i++;
    }
    return sign * res;
}

// #include <stdio.h>
// int main() {
//     int n;
//     n = ft_atoi("   -123456789");
//     printf("%d\n", n);
//     return 0;
// }

