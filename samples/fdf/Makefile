# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 23:59:52 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/26 00:37:10 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS		=	--silent

NAME			=	

INCLUDE_SRCS	=	$(addprefix $(INCLUDE_PATH), $(INCLUDE_LIST))
INCLUDE_PATH	=	./
INCLUDE_LIST	=	

SRC_SRCS	=	$(addprefix $(INCLUDE_PATH), $(INCLUDE_LIST))
SRC_OBJS	=	$(LIBS:.c.o)
SRC_PATH	=	./
SRC_LIST	=	

COMPILER		=	cc
CFLAGS			=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR				=	ar
AFLAGS			=	rc

REMOVE			=	rm
RFLAGS			=	-rf

LIBS			=	$(foreach libs, $(LIBS_LIST), $(LIBS_PATH)/$(libs)/$(libs).h)
LIBS_PATH		=	../../42rio/42cursus/
LIBS_LIST		=	libft \
					libftprintf \
					get_next_line \

run:
					make -C $(LIBS)

test:
					cat $(LIBS)
