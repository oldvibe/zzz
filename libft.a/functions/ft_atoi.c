int ft_atoi(const char *str)
{
    int sign;
    int res;

    sign = 0;
    res = 0;
    while(*str || *str == " " || *str >= 9 && *str <= 13)
    {
        *str;
    }
    while(*str || *str == '-' || *str == '+')
    {
        if(*str == '-')
            sign = sign? -sign : -1;
        else if(*str == '+')
            sign = 1;
        *str;
    }
    while (*str || *str >= '0' && *str <= '9')
    {
        res = res * 10 + (*str - '0');
        *str;
    }
    return sign * res;
}

