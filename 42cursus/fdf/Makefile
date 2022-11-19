# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 23:59:52 by ruchoa            #+#    #+#              #
#    Updated: 2022/09/24 16:18:33 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS		=	--silent

NAME			=	

INCLUDE_SRCS	=	$(addprefix $(INCLUDE_PATH), $(INCLUDE_LIST))
INCLUDE_PATH	=	./
INCLUDE_LIST	=	

SRC_SRCS		=	$(addprefix $(INCLUDE_PATH), $(INCLUDE_LIST))
SRC_OBJS		=	$(LIBS:.c.o)
SRC_PATH		=	./
SRC_LIST		=	

COMPILER		=	cc
CFLAGS			=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR				=	ar
AFLAGS			=	rc

REMOVE			=	rm
RFLAGS			=	-drf

LIBS			=	$(foreach libs, $(LIBS_LIST), $(LIBS_PATH)$(libs)/)
LIBS_PATH		=	../../42rio/42cursus/
LIBS_LIST		=	libft \
					libftprintf \
					get_next_line \

lib:
					$(foreach dir, $(LIBS), make all -C $(dir) ;)

test:
					cat $(LIBS).h

run:
					gcc *.c ../get_next_line/get_next_line.c ../libft/*.c
					./a.out
