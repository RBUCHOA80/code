# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 18:45:54 by ruchoa            #+#    #+#              #
#    Updated: 2022/09/21 23:22:41 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS		=	--silent

NAME			=	push_swap

NAME_BONUS		=	checker

LIBS			=	$(foreach libs, $(LIBS_list), $(LIBS_PATH)$(libs)/)
LIBS_O			=	$(foreach libs, $(LIBS_list), $(LIBS_PATH)$(libs)/*.o)
LIBS_A			=	$(foreach libs, $(LIBS_list), $(LIBS_PATH)$(libs)/$(libs).a)
LIBS_PATH		=	../
LIBS_list		=	libft \
					libftprintf \

INCLUDE_PATH	=	./

COMPILER		=	cc
CFLAGS			=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR				=	ar
AFLAGS			=	rc

REMOVE			=	rm
RFLAGS			=	-drf

SRCS			=	$(addprefix $(SRCS_PATH), $(SRCS_list))
SRCS_OBJS		= 	$(SRCS:.c=.o)
SRCS_PATH		=	./
SRCS_list		=	push_swap.c \
					ft_lst_take.c \
					ft_operation_push.c \
					main.c \

BONUS			=	$(addprefix $(BONUS_PATH), $(BONUS_list))
BONUS_OBJS		=	$(BONUS:.c=.o)
BONUS_PATH		=	./
BONUS_list		=	checker.c \

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

#ARG=$(echo {1..500}$'\n' | sort -R | tr "\n" " "); ./push_swap $ARG
ARG				=	VAR="987 258 654 321 555 147 789 369 456 123"; ./$(NAME) $$VAR

run:				$(NAME)
					$(ARG)
					

vrun:				$(NAME)
					valgrind --leak-check=full -s -v ./$(NAME) $(ARG)

b:					$(NAME_BONUS)
#					valgrind --leak-check=full -s ./$(NAME_BONUS) $(ARG)
					./$(NAME_BONUS) $(ARG)
					$(REMOVE) $(RFLAGS) $(NAME_BONUS)
