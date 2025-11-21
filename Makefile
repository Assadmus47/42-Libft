CC= cc

CFLAGS= -Wall -Wextra -Werror

NAME= libft.a

SRC= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
      ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
      ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
      ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c \
      ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
      ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
      ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c

SRC_BONUS= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c 

HEADER = libft.h

OBJ= $(SRC:.c=.o)

OBJ_BONUS= $(SRC_BONUS:.c=.o)

DEP= $(SRC:.c=.d)

BONUS_DEP= $(SRC_BONUS:.c=.d)

ALL_OBJ = $(OBJ) $(OBJ_BONUS)

ALL_DEP = $(DEP) $(BONUS_DEP)

%.o: %.c
	$(CC) -MMD -MP -o $@ -c $< $(CFLAGS) -I$(HEADER)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rcs $(NAME) $(OBJ)

bonus:
	$(MAKE) $(NAME) SRC="$(SRC) $(SRC_BONUS)"

clean:
	rm -f $(ALL_OBJ) $(ALL_DEP)

fclean: clean
	rm -f $(NAME)

re: fclean all

-include= $(DEP) 

gitauto:
	git add .
	git commit -m "auto commit"
	git push

git:
	git add .
	git commit -m "$(msg)"
	git push

.PHONY: all clean fclean re bonus
