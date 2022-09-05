# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 19:42:31 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/30 22:21:13 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS		=	--silent

NAME			=	get_next_line.a

NAME_BONUS		=	get_next_line_bonus.a

LIBS			=	$(foreach libs, $(LIBS_LIST), $(LIBS_PATH)$(libs)/)
LIBS_O			=	$(foreach libs, $(LIBS_LIST), $(LIBS_PATH)$(libs)/*.o)
LIBS_PATH		=	../
LIBS_LIST		=	libft

INCLUDE_PATH	=	./

COMPILER		=	cc
CFLAGS			=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR				=	ar
AFLAGS			=	rc

REMOVE			=	rm
RFLAGS			=	-drf

SRCS			=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_OBJS		= 	$(SRCS:.c=.o)
SRCS_PATH		=	./
SRCS_LIST		=	get_next_line.c

BONUS			=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS		=	$(BONUS:.c=.o)
BONUS_PATH		=	./
BONUS_LIST		=	get_next_line_bonus.c

.c.o:
					$(COMPILER) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):			$(SRCS_OBJS)
					$(foreach dir, $(LIBS), make all -C $(dir) ;)
					$(AR) $(AFLAGS) $(NAME) $(LIBS_O) $(SRCS_OBJS)

$(NAME_BONUS):		$(BONUS_OBJS) 
					$(foreach dir, $(LIBS), make all -C $(dir) ;)
					$(AR) $(AFLAGS) $(NAME_BONUS) $(LIBS_O) $(BONUS_OBJS)

all:				$(NAME)

bonus:				$(NAME_BONUS)

clean:
					$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)

fclean:				clean
					$(REMOVE) $(RFLAGS) $(NAME) $(NAME_BONUS)

re:					fclean all

.PHONY:				all clean fclean re

run:				$(NAME)
					$(COMPILER) $(CFLAGS) $(NAME) main.c -o a.out
#					valgrind --leak-check=full -s ./a.out
					./a.out
					$(REMOVE) $(RFLAGS) a.out*

b:					$(NAME_BONUS)
					$(COMPILER) $(CFLAGS) $(NAME_BONUS) main.c
#					valgrind --leak-check=full -s ./a.out
					./a.out
					$(REMOVE) $(RFLAGS) a.out*
