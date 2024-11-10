
#include"libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}
// int main(){
//     int fd;
//    fd= open("es.txt", O_WRONLY);
//    ft_putstr_fd("khadija", fd);
//    close(fd);
//    return (0);

// }