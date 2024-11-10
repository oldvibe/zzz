#include"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
// int main(){
//     int fd;

//    fd= open("essa.txt",777);
//    ft_putchar_fd('v',fd);
// //    char *o;
// //    o=(char*)malloc(1);

// //    read(0,o,1);
//    close(fd);
//    return (0);

// }