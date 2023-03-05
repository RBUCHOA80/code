NAME = push_swap

CC	= cc
CFLAGS	= -Wall -Wextra -Werror
HEAD = push_swap.h

SRCS	= push_swap.c check_args.c find_pivot.c bubble_sort.c free.c ft_atoi.c ft_split.c\
		pop.c push.c rotate.c reverse_rotate.c sort.c swap_a_b.c radix_sort.c \

OBJECTS	= $(SRCS:.c=.o)

all:	$(NAME)

.o .c:
		${CC} ${CFLAGS} -c $< -o $@


$(NAME): $(OBJECTS)
		 $(CC) -o $(NAME) $(OBJECTS)

$(OBJECTS)	= $(HEAD)

clean:
		rm -rf $(OBJECTS)

fclean:	clean
		rm -rf $(NAME)

re: fclean all

.PHONY: all re clean fclean
