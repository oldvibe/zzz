void	ft_bzero(void *s, int n)
{
    int i;

    i = 0;
    while(i < n)
    {
        if (((char *)s)[i])
        {
            ((char *)s)[i] = 0;
        }
        i++;
    }
}