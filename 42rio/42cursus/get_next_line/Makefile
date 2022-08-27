# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 19:42:31 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/27 08:30:20 by ruchoa           ###   ########.fr        #
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

bonus:				$(BONUS_OBJS)
					$(AR) $(AFLAGS) $(NAME) $(BONUS_OBJS)

run:				$(SRCS_OBJS)
					$(COMPILER) $(CFLAGS) main.c $(SRCS_OBJS)
#					valgrind --leak-check=full -s ./a.out
					./a.out
					$(REMOVE) $(RFLAGS) a.out*

b:
					$(COMPILER) $(CFLAGS) main.c $(BONUS_LIST) -D BUFFER_SIZE=42
					valgrind --leak-check=full ./a.out
					$(REMOVE) $(RFLAGS) a.out*
