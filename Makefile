NAME = libftprintf.a
CC = gcc
AR = ar rcs

CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
SRC = ft_putchar.c ft_printf.c ft_putstring.c
OBJ = $(SRC:.c=.o)
all: $(NAME)

$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) -c $(SRC)
	@$(AR) $@ $^



clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean re