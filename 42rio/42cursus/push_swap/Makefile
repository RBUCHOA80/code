# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 18:45:54 by ruchoa            #+#    #+#              #
#    Updated: 2022/09/06 15:59:18 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS		=	--silent

NAME			=	push_swap

NAME_BONUS		=	checker

LIBS			=	$(foreach libs, $(LIBS_LIST), $(LIBS_PATH)$(libs)/)
LIBS_O			=	$(foreach libs, $(LIBS_LIST), $(LIBS_PATH)$(libs)/*.o)
LIBS_PATH		=	../
LIBS_LIST		=	libft \
					libftprintf \
					get_next_line \

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
SRCS_LIST		=	main.c \
					push_swap.c \
					ft_merge_sort.c \
					ft_printf_arr.c \

BONUS			=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS		=	$(BONUS:.c=.o)
BONUS_PATH		=	./
BONUS_LIST		=	main.c \
					checker.c \
					ft_merge_sort.c \
					ft_printf_arr.c \

.c.o:
					$(COMPILER) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):			$(SRCS_OBJS)
					$(foreach dir, $(LIBS), make all -C $(dir) ;)
					$(COMPILER) $(CFLAGS) $(LIBS_O) $(SRCS_OBJS) -o $(NAME)

$(NAME_BONUS):		$(BONUS_OBJS) 
					$(foreach dir, $(LIBS), make all -C $(dir) ;)
					$(COMPILER) $(CFLAGS) $(LIBS_O) $(BONUS_OBJS) -o $(NAME_BONUS)

all:				$(NAME)

bonus:				$(NAME_BONUS)

clean:
					$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)

fclean:				clean
					$(REMOVE) $(RFLAGS) $(NAME) $(NAME_BONUS)

re:					fclean all

.PHONY:				all clean fclean re

ARG				=	8 \
					5 \
					3 \
					7 \
					6 \
					2 \
					4 \
					1 \

run:				$(NAME)
#					valgrind --leak-check=full -s ./$(NAME) $(ARG)
					./$(NAME) $(ARG)
					$(REMOVE) $(RFLAGS) a.out*

b:					$(NAME_BONUS)
#					valgrind --leak-check=full -s ./$(NAME_BONUS) $(ARG)
					./$(NAME_BONUS) $(ARG)
					$(REMOVE) $(RFLAGS) a.out*
