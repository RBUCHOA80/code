# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 19:42:31 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/25 20:18:34 by ruchoa           ###   ########.fr        #
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

SRCS_PATH		=	./
SRCS_LIST		=	get_next_line.c

SRCS			=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))

$(NAME):		$(SRCS)
				$(AR)

all:
				gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c
				ar rc get_next_line.c get_next_line_utils.c

re:				fclean all


.PHONY:			all clean fclean re


run:
				gcc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=42
				valgrind --leak-check=full ./a.out
				time ./a.out
				rm a.out

bonus:
				gcc -Wall -Wextra -Werror main.c get_next_line_bonus.c get_next_line_utils_bonus.c -D BUFFER_SIZE=42
				valgrind --leak-check=full ./a.out
				time ./a.out
				rm a.out
