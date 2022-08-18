# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/16 19:25:41 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/17 21:55:27 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OPATH		=	./
OBJ			=	*.c
OBJS		=	$(addprefix $(OPATH), $(OBJ))

COMPILER	=	cc
CFLAGS		=	-Wall -Wextra -Werror

AR			=	ar
AFLAGS		=	rc

RM			=	rm
RFLAGS		=	-fr

NAME		=	push_swap

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
