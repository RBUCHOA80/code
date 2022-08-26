# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 19:42:31 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/26 18:41:10 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS		=	--silent

NAME			=	get_next_line.a

INCLUDE_PATH	=	./

COMPILER		=	cc
CFLAGS			=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR				=	ar
AFLAGS			=	rc

REMOVE			=	rm
RFLAGS			=	-rf

SRCS			=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_OBJS		= 	$(SRCS:.c=.o)
SRCS_PATH		=	./
SRCS_LIST		=	get_next_line.c

BONUS			=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS		=	$(BONUS:.c=.o)
BONUS_PATH		=	./
BONUS_LIST		=	get_next_line_bonus.c \

.c.o:
					$(COMPILER) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):			$(SRCS_OBJS) $(BONUS_OBJS)
					$(AR) $(AFLAGS) $(NAME) $(SRCS_OBJS) $(BONUS_OBJS)

all:				$(NAME)

clean:
					$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)

fclean:				clean
					$(REMOVE) $(RFLAGS) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re

bonus:				$(SRCS_OBJS) $(BONUS_OBJS)
					$(AR) $(AFLAGS) $(NAME) $(SRCS_OBJS) $(BONUS_OBJS)

run:
					$(COMPILER) $(CFLAGS) *.c
#					valgrind --leak-check=full -s ./a.out
					./a.out
					$(REMOVE) $(RFLAGS) a.out*

b:
					$(COMPILER) $(CFLAGS) main.c get_next_line_bonus.c get_next_line_utils_bonus.c -D BUFFER_SIZE=42
					valgrind --leak-check=full ./a.out
					$(REMOVE) $(RFLAGS) a.out*
