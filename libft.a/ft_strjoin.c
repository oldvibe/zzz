#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	char	*b;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	b = (char *)malloc(ft_strlen(s1) + strlen(s2) + 1);
	if (!b)
		return (NULL);
	while (s1[j])
	{
		b[i++] = s1[j++];
	}
	j = 0;
	while (s2[j])
	{
		b[i++] = s2[j++];
	}
	b[i] = '\0';
	return (b);
}
// int main(){
//    printf("%s",ft_strjoin("lorem ipsum","dolor sit amet"));
//    return (0);

// }