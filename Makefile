NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
ARFLAGS = -rc

SRC = ft_printf.c ft_print_string.c ft_print_pointer.c ft_print_number.c ft_print_unumber.c ft_print_hex.c
OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar $(ARFLAGS) $(NAME) $(OBJ)

clean: $(OBJ)
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
