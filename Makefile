NAME = libmy.a
CC = gcc
FLAG = -Wall -Wextra -Werror
CMPL = $(CC) $(FLAG) -c
RM = rm -rf
MKDIR = mkdir -p
OBJDIR = OBJECTS
OBJDIRBONUS = OBJECTS

SRC =	./my_atoi.c			\
		./my_bzero.c		\
		./my_calloc.c		\
		./my_isalnum.c		\
		./my_isalpha.c		\
		./my_isascii.c		\
		./my_isdigit.c		\
		./my_isprint.c		\
		./my_itoa.c		\
		./my_memchr.c		\
		./my_memcmp.c		\
		./my_memcpy.c		\
		./my_memmove.c		\
		./my_memset.c		\
		./my_putchar_fd.c	\
		./my_putendl_fd.c	\
		./my_putnbr_fd.c	\
		./my_putstr_fd.c	\
		./my_split.c		\
		./my_strchr.c		\
		./my_strdup.c		\
		./my_striteri.c		\
		./my_strjoin.c		\
		./my_strlcat.c		\
		./my_strlcpy.c		\
		./my_strlen.c		\
		./my_strmapi.c		\
		./my_strncmp.c		\
		./my_strnstr.c		\
		./my_strrchr.c		\
		./my_strtrim.c		\
		./my_substr.c		\
		./my_tolower.c		\
		./my_toupper.c

BONUS = 	./my_lstadd_back.c	\
		./my_lstadd_front.c	\
		./my_lstclear.c		\
		./my_lstdelone.c	\
		./my_lstiter.c		\
		./my_lstlast.c		\
		./my_lstmap.c		\
		./my_lstnew.c		\
		./my_lstsize.c

OBJ = $(addprefix $(OBJDIR)/,$(notdir $(SRC:.c=.o)))
BONUS_OBJ = $(addprefix $(OBJDIRBONUS)/,$(notdir $(BONUS:.c=.o)))

$(OBJDIR)/%.o:  %.c
	@$(MKDIR) $(OBJDIR)
	@$(CMPL) $< -o $@

$(OBJDIRBONUS)/%.o: %.c
	@$(MKDIR) $(OBJDIRBONUS)
	@$(CMPL) $< -o $@

all: $(NAME)
a: all

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

b: bonus
bonus: $(BONUS_OBJ)
	@ar rc $(NAME) $(BONUS_OBJ)
	@ranlib $(NAME)

c: clean
clean:
	@$(RM) $(OBJDIR)

f: fclean
fclean : clean
	@$(RM) $(NAME)

re: fclean all
bre: fclean bonus

br: bre
rb: bre
reb: bre

r:
	@make fclean
	@make all
	@make bonus
	@make clean

n: norm
norm:
	@norminette $(SRC) $(BONUS)

.PHONY: all clean fclean re bonus
