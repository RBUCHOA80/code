# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 18:45:54 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/31 19:22:03 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS		=	--silent

NAME			=	push_swap

NAME_BONUS		=	checker

LIBS			=	$(foreach libs, $(LIBS_LIST), $(LIBS_PATH)$(libs)/)
LIBS_O			=	$(foreach libs, $(LIBS_LIST), $(LIBS_PATH)$(libs)/*.o)
LIBS_PATH		=	../
LIBS_LIST		=	libft \
					get_next_line \
					libftprintf

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
SRCS_LIST		=	push_swap.c

BONUS			=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS		=	$(BONUS:.c=.o)
BONUS_PATH		=	./
BONUS_LIST		=	checker.c

.c.o:
					$(COMPILER) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):			$(SRCS_OBJS)
					$(foreach dir, $(LIBS), make all -C $(dir) ;)
					$(COMPILER) $(CFLAGS) $(LIBS_O) $(SRCS_OBJS) main.c -o $(NAME)

$(NAME_BONUS):		$(BONUS_OBJS) 
					$(foreach dir, $(LIBS), make all -C $(dir) ;)
					$(COMPILER) $(CFLAGS) $(LIBS_O) $(BONUS_OBJS) main.c -o $(NAME_BONUS)

all:				$(NAME)

bonus:				$(NAME_BONUS)

clean:
					$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)
					$(foreach dir, $(LIBS), make clean -C $(dir) ;)

fclean:				clean
					$(REMOVE) $(RFLAGS) $(NAME) $(NAME_BONUS)
					$(foreach dir, $(LIBS), make fclean -C $(dir) ;)

re:					fclean all bonus
					$(foreach dir, $(LIBS), make re -C $(dir) ;)

.PHONY:				all clean fclean re

run:				$(NAME)
#					valgrind --leak-check=full -s $(NAME)
					./$(NAME)

b:					$(NAME_BONUS)
#					valgrind --leak-check=full -s $(NAME_BONUS)
					./$(NAME_BONUS)
