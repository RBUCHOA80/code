# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 18:45:54 by ruchoa            #+#    #+#              #
#    Updated: 2022/09/16 08:11:11 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS		=	--silent

NAME			=	push_swap

NAME_BONUS		=	checker

LIBS			=	$(foreach libs, $(LIBS_stack), $(LIBS_PATH)$(libs)/)
LIBS_O			=	$(foreach libs, $(LIBS_stack), $(LIBS_PATH)$(libs)/*.o)
LIBS_PATH		=	../
LIBS_stack		=	libft \
					libftprintf \
					get_next_line \

INCLUDE_PATH	=	./

COMPILER		=	cc
CFLAGS			=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR				=	ar
AFLAGS			=	rc

REMOVE			=	rm
RFLAGS			=	-drf

SRCS			=	$(addprefix $(SRCS_PATH), $(SRCS_stack))
SRCS_OBJS		= 	$(SRCS:.c=.o)
SRCS_PATH		=	./
SRCS_stack		=	main.c \
					ft_free_str.c \
					ft_stack_len.c \
					ft_printf_stack.c \
					ft_str_to_stack.c \
					operation_swap.c \

BONUS			=	$(addprefix $(BONUS_PATH), $(BONUS_stack))
BONUS_OBJS		=	$(BONUS:.c=.o)
BONUS_PATH		=	./
BONUS_stack		=	checker.c \

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

ARG=$(echo {1..500}$'\n' | sort -R | tr "\n" " "); ./push_swap $ARG

run:				$(NAME)
					./$(NAME)

vrun:				$(NAME)
					valgrind --leak-check=full -s -v ./$(NAME)

b:					$(NAME_BONUS)
#					valgrind --leak-check=full -s ./$(NAME_BONUS) $(ARG)
					./$(NAME_BONUS) $(ARG)
					$(REMOVE) $(RFLAGS) $(NAME_BONUS)
