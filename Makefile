NAME = libft.a

SRC = ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_isalpha.c ft_isdigit.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c\
# para salto de linea \ en vez de espacio al final de cada linea

OBJ = $(SRC:.c=.o)

CC = gcc -Wall -Werror -Wextra

LIBFTC = ar rcs

RM = rm -f

%.o: %.c
	$(CC) -c $< -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(LIBFTC) $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re



