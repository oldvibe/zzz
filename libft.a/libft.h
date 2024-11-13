#ifndef _LIBFT_H
# define _LIBFT_H

# define BUFF_SIZE 1
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
#include <string.h>



typedef struct s_list
{
    void            *content;
    size_t          content_size;
    struct s_list   *next;
} t_list;

int     ft_atoi(const char *str);
void	ft_bzero(void *s, int n);
int     ft_isalnum(int i);
int     ft_isalpha(int i);
int     ft_isascii(int i);
int     ft_isdigit(int i);
int     ft_isprint(int i);
void    *ft_memchr(const void *s, int c, size_t n);
int     ft_memcmp(const void *s1, const void *s2, size_t n);
void    *ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *a, int c, int len);
size_t  ft_strlcpy(char *dest, const char *src, size_t destsize);
int     ft_strncmp(const char *s1, const char *s2, size_t n);
char    *ft_strncpy(char *dest, const char *src, size_t n);
size_t  ft_strlcat(char *dest, const char *src, size_t destsize);
char    *ft_strrchr(const char *s, int c);
char    *ft_strchr(const char *s, int c);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int     ft_tolower(int c);
int     ft_toupper(int c);
int     ft_strlen(const char *str);
void	ft_putchar_fd(char c, int fd);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strdup(const char *s1);

#endif
