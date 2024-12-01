NAME = libftprintf.a
CFLAGS = -Wall -Wextra -Werror -Iheader
CC = cc
SRC = utils/ft_handle_format.c utils/ft_handle_int.c utils/ft_handle_string.c\
      utils/ft_handle_char.c utils/ft_handle_hex.c utils/ft_handle_ptr.c\
      utils/ft_handle_uint.c  utils/ft_printf.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
		ar rcs $(NAME) $?

clean:
		rm -f $(OBJ)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: re clean fclean all
