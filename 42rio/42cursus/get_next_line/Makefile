# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 19:42:31 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/25 22:24:58 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS		=	--silent

INCLUDE_PATH	=	./

COMPILER		=	cc
CFLAGS			=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR				=	ar
AFLAGS			=	rc

NAME			=	get_next_line.a

REMOVE			=	rm
RFLAGS			=	-rf

SRCS			=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_PATH		=	./
SRCS_LIST		=	get_next_line.c

OBJS			= 	$(SRCS:.c=.o)

.c.o:
					$(COMPILER) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):			$(OBJS)
					$(AR) $(AFLAGS) $(NAME) $(OBJS)

all:				$(NAME)
					gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c
					ar rc get_next_line.c get_next_line_utils.c

re:					fclean all


.PHONY:				all clean fclean re

BONUS			=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_PATH		=	./
BONUS_LIST		=	get_next_line_bonus.c \
					get_next_line_utils_bonus.c \

BONUS_OBJS		=	$(BONUS:.c=.o)

bonus:				$(OBJS) $(BONUS_OBJS)
					$(AR) $(AFLAGS) $(NAME) $(OBJS) $(BONUS_OBJS)

run:
					cc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=42
					valgrind --leak-check=full ./a.out
					rm -drf a.out*

b:
					cc -Wall -Wextra -Werror main.c get_next_line_bonus.c get_next_line_utils_bonus.c -D BUFFER_SIZE=42
					valgrind --leak-check=full ./a.out
					rm -drf a.out*
