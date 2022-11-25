NAME = pipex
NAME_BONUS = pipex_bonus
HEADER = pipex.h pipex_bonus.h
LIBFT = libft

SRC = main.c pipex.c processes.c \
	push_cmd.c error_handler.c

OBJ = $(SRC:.c=.o)

SRC_BONUS = main_bonus.c pipex_bonus.c processes_bonus.c \
	push_cmd_bonus.c error_handler_bonus.c

OBJ_BONUS = $(SRC_BONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra
CC = cc
RM = rm -f

$(NAME): $(OBJ)
	make -C $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT)/libft.a -o $(NAME)

$(NAME_BONUS): $(OBJ_BONUS)
	make -C $(LIBFT)
	$(CC) $(CFLAGS) $(OBJ_BONUS) $(LIBFT)/libft.a -o $(NAME_BONUS)

all: $(NAME)

bonus: $(NAME_BONUS)

clean:
	make clean -C $(LIBFT)
	$(RM) $(OBJ) $(OBJ_BONUS)

fclean: clean
	make fclean -C $(LIBFT)
	$(RM) $(NAME) $(NAME_BONUS)

re: fclean all

.PHONY: all clean fclean re bonus
