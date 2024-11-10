#include "libft.h"

int	count(int a)
{
	long	n;
	int		v;
	int		s;

	n = a;
	v = 0;
	s = n;
	while (s != 0)
	{
		s = s / 10;
		v++;
	}
	if (n < 0)
	{
		v++;
	}
	return (v);
}

char	*lzero(void)
{
	char	*nv;

	nv = (char *)malloc(1 + 1);
	nv[0] = 0 + '0';
	nv[1] = '\0';
	return (nv);
}

char	*ft_itoa(int n)
{
	long	l;
	char	*nv;
	int		i;

	l = n;
	i = 0;
	if (l == 0)
		return (lzero());
	nv = (char *)calloc(count(n) + 1, sizeof(char ));
	if (!nv)
		return (0);
	if (n < 0)
	{
		nv[i++] = '-';
		l = -l;
	}
	i = count(n) - 1;
	while (l != 0)
	{
		nv[i--] = l % 10 + '0';
		l = l / 10;
	}
	return (nv);
}