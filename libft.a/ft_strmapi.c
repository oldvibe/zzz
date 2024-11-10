#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// char ch(unsigned int h,char j){
//     if(j == 'a')
//         j = 'h';
//     return (j);
// }

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*m;
	unsigned int	i;

	i = 0;
	m = (char *)malloc(ft_strlen(s) + 1);
	if (!m)
		return (0);
	while (s[i])
	{
		m[i] = f(i, s[i]);
		i++;
	}
	m[i] = '\0';
	return (m);
}

// int main(){
//     printf("%s",ft_strmapi("dija",ch));
// }