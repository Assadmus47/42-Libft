
CC = cc 

LIB = libft.a

LIBC = ./ft_isalnum.c ./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c ./ft_memcpy.c ./ft_memmove.c ./ft_memset.c ./ft_strlen.c

OBJ = ./ft_isalnum.o ./ft_isalpha.o ./ft_isascii.o ./ft_isdigit.o ./ft_isprint.o ./ft_memcpy.o ./ft_memmove.o ./ft_memset.o ./ft_strlen.o

CFLAGS = -Wall -Wextra -Weroor 

all: $(LIB)

$(LIB): $(OBJ)
	ar -rcs $(LIB) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(OBJ)

re: fclean all

git:
	git add .
	git commit -m "auto commit"

gitpush:
	git add .
	git commit -m "auto commit"
	git push

.PHONY : all cleam fclean re