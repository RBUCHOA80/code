# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 18:45:54 by ruchoa            #+#    #+#              #
#    Updated: 2022/10/10 21:37:02 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

NAME				=	push_swap

NAME_BONUS			=	checker

LIBS				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/)
LIBS_A				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_PATH			=	../
LIBS_list			=	libft \
						libftprintf \

INCLUDE_PATH		=	./

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR					=	ar
AFLAGS				=	rc

REMOVE				=	rm
RFLAGS				=	-drf

SRCS				=	$(addprefix $(SRCS_PATH), $(SRCS_list))
SRCS_OBJS			= 	$(SRCS:.c=.o)
SRCS_PATH			=	./
SRCS_list			=	push_swap.c \
						ft_lst_take.c \
						ft_operation_reverse.c \
						ft_operation_rotate.c \
						ft_operation_push.c \
						ft_operation_swap.c \
						ft_printf_stacks.c \
						main.c \

BONUS				=	$(addprefix $(BONUS_PATH), $(BONUS_list))
BONUS_OBJS			=	$(BONUS:.c=.o)
BONUS_PATH			=	./
BONUS_list			=	checker.c \

#						$(shell echo '$@ <- Nome da regra.')
#						$(shell echo '$< <- Nome da primeira dependência.')
#						$(shell echo '$^ <- Lista de dependências.')
#						$(shell echo '$? <- Lista de dependências mais recentes que a regra.')
#						$(shell echo '$* <- Nome do arquivo sem sufixo.')

.c.o:
						$(COMPILER) $(CFLAGS) -c $< -o $(<:.c=.o)

all:					$(NAME)

bonus:					$(NAME_BONUS)

$(NAME):				$(SRCS_OBJS)
						$(foreach dir, $(LIBS), make all -C $(dir) ;)
						$(COMPILER) $(CFLAGS) $(LIBS_A) $(SRCS_OBJS) -o $(NAME)

$(NAME_BONUS):			$(BONUS_OBJS) 
						$(foreach dir, $(LIBS), make all -C $(dir) ;)
						$(COMPILER) $(CFLAGS) $(LIBS_A) $(BONUS_OBJS) -o $(NAME_BONUS)

clean:
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)

fclean:					clean
						$(REMOVE) $(RFLAGS) $(NAME) $(NAME_BONUS)

re:						fclean all

.PHONY:					all clean fclean re

ARG					=	VAR=$$(echo {100..109}$$'\n' | sort --sort=random | tr "\n" " ");

run:					$(NAME)
						$(ARG) ./$(NAME) $$VAR

vrun:					$(NAME)
						$(ARG) valgrind --leak-check=full -s -v ./$(NAME) $$VAR

b:						$(NAME_BONUS)
#						valgrind --leak-check=full -s ./$(NAME_BONUS) $(ARG)
						$(ARG) ./$(NAME_BONUS) $$VAR
						$(REMOVE) $(RFLAGS) $(NAME_BONUS)
