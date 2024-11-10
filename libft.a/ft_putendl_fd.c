#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
// int main(){
//     int fd;
//    fd= open("test.txt",O_WRONLY);
//    ft_putendl_fd("hasna",fd);
//    close(fd);
//    return (0);

// }