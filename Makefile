NAME = libft.a
RM = rm -rf
COMPİLE = gcc -Wall -Wextra -Werror -c
SRC = 	./ft_atoi.c 		\
 		./ft_bzero.c 		\
 		./ft_calloc.c 		\
 		./ft_isalnum.c 		\
 		./ft_isalpha.c 		\
 		./ft_isascii.c 		\
 		./ft_isdigit.c 		\
 		./ft_isprint.c 		\
 		./ft_itoa.c 		\
 		./ft_memchr.c 		\
 		./ft_memcmp.c 		\
 		./ft_memcpy.c 		\
 		./ft_memmove.c 		\
 		./ft_memset.c 		\
 		./ft_putchar_fd.c 	\
 		./ft_putendl_fd.c 	\
 		./ft_putnbr_fd.c 	\
 		./ft_putstr_fd.c 	\
		./ft_split.c		\
 		./ft_strchr.c 		\
 		./ft_strdup.c		\
 		./ft_striteri.c 	\
 		./ft_strjoin.c 		\
 		./ft_strlcat.c 		\
		./ft_strlcpy.c		\
 		./ft_strlen.c 		\
 		./ft_strmapi.c 		\
 		./ft_strncmp.c 		\
 		./ft_strnstr.c 		\
		./ft_strrchr.c 		\
 		./ft_strtrim.c 		\
		./ft_substr.c		\
 		./ft_tolower.c 		\
 		./ft_toupper.c

BONUS = ./ft_lstadd_back.c 	\
		./ft_lstadd_front.c	\
 		./ft_lstclear.c		\
 		./ft_lstdelone.c 	\
 		./ft_lstiter.c 		\
		./ft_lstlast.c		\
 		./ft_lstmap.c 		\
 		./ft_lstnew.c		\
		./ft_lstsize.c

OBJ = $(SRC:.c=.o)
BONUS_OBJ = $(BONUS:.c=.o)

all: $(NAME)

$(NAME) :
	$(COMPILE) $(SRC)
	ar rc $(NAME) $(OBJ)

bonus :
	$(COMPILE) $(BONUS)
	ar rc $(NAME) $(BONUS_OBJ)

clean :
	$(RM) $(OBJ) $(BONUS_OBJ)

fclean : clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all bonus clean fclean re
