# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 18:45:54 by ruchoa            #+#    #+#              #
#    Updated: 2022/09/28 19:30:07 by ruchoa           ###   ########.fr        #
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
					ft_operation_reverse.c \
					ft_operation_rotate.c \
					ft_operation_push.c \
					ft_operation_swap.c \
					ft_printf_stacks.c \
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
ARG				=	VAR="987 258 654 321 555 147 789 369 456 123";

run:				$(NAME)
					$(ARG) ./$(NAME) $$VAR

run2:
					./push_swap {100..105}$$'\n' | sort -R

vrun:				$(NAME)
					$(ARG) valgrind --leak-check=full -s -v ./$(NAME) $$VAR

b:					$(NAME_BONUS)
#					valgrind --leak-check=full -s ./$(NAME_BONUS) $(ARG)
					$(ARG) ./$(NAME_BONUS) $$VAR
					$(REMOVE) $(RFLAGS) $(NAME_BONUS)
