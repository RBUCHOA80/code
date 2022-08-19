LIB_PATH	=	../
LIB_LIST	=	libft.a \
				libftprintf.a \
				get_next_line

OPATH		=	./
OBJ			=	*.c
OBJS		=	$(addprefix $(OPATH), $(OBJ))

COMPILER	=	cc
CFLAGS		=	-Wall -Wextra -Werror

AR			=	ar
AFLAGS		=	rc

RM			=	rm
RFLAGS		=	-fr

NAME		=	push_swap.a

.c.o		=	$(OBJS:.c.o)

$(NAME):		$(OBJS)
				$(AR) $(AFLAGS) $(NAME)

all:			$(NAME)

clean:
				$(RM) $(RFLAGS) $(OBJS)

fclean:			clean
				$(RM) $(RFLAGS) $(NAME)

re:				fclean all

.PHONY:
				all clean fclean re

run:
				@make -C ../libft/
				@make -C ../ft_printf/
				@make -C ../get_next_line/
#				@cc -Wall -Wextra -Werror ./*.c ../libft/libft.a ../ft_printf/ft_printf.a ../get_next_line/get_next_line.a
#				@./a.out
#				@rm -drf ft_printf get_next_line libft
#				@rm a.out
