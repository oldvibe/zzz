#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	l;

	l = n;
	if (l < 0)
	{
		ft_putchar_fd('-', fd);
		l = -l;
	}
	if (l > 9)
	{
		ft_putnbr_fd(l / 10, fd);
		ft_putnbr_fd(l % 10, fd);
	}
	else
		ft_putchar_fd((char)(l + '0'), fd);
}
// int main(){
// int fd;
//    fd= open("essa.txt",777);
//     ft_putnbr_fd(999,fd);
//     return (0);
// }