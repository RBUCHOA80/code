# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 18:45:54 by ruchoa            #+#    #+#              #
#    Updated: 2022/12/18 22:24:46 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

NAME				=	push_swap

NAME_BONUS			=	checker

LIBS				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/)
LIBS_A				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_PATH			=	../
LIBS_LIST			=	libft \
						libftprintf \

INCLUDE_PATH		=	./

ifeq ($(shell uname), Darwin) # MacOS
	SYSTEM	=	@printf "\e[1;33mMacOS detected.\n\e[m" ;
	ARG		=	VAR=$$(echo {101..109}$$'\n' | sort --sort=random | tr "\n" " ") ;
else ifeq ($(shell uname -r | grep 'WSL' | wc -l), 1) # Windows / WSL
	SYSTEM	=	@printf "\e[1;33mWindows / WSL detected.\n\e[m" ;
	ARG		=	VAR="109 106 101 107 103 105 104 108 102" ;
#	ARG		:=	VAR=$$(echo {101..109}$$'\n' | sort --sort=random | tr "\n" " ") ;
else ifeq ($(shell uname), Linux) # Native Linux
	SYSTEM	=	@printf "\e[1;33mNative Linux detected.\n\e[m" ;
	ARG		=	VAR=$$(echo {101..109}$$'\n' | sort --sort=random | tr "\n" " ") ;
endif

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR					=	ar
AFLAGS				=	rc

REMOVE				=	rm
RFLAGS				=	-drf

SRCS				=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_OBJS			= 	$(SRCS:.c=.o)
SRCS_PATH			=	./
SRCS_LIST			=	ft_bubble_sort.c \
						index_stack.c \
						ft_lsttake_back.c \
						ft_lsttake_front.c \
						ft_operation_push.c \
						ft_operation_reverse.c \
						ft_operation_rotate.c \
						ft_operation_swap.c \
						ft_printf_stacks.c \
						main.c \
						push_swap.c \
						tab_index.c \

BONUS				=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS			=	$(BONUS:.c=.o)
BONUS_PATH			=	./
BONUS_LIST			=	checker.c \

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
						$(foreach lib, $(LIBS), make -C $(lib) ;)
						$(COMPILER) $(CFLAGS) $(SRCS_OBJS) $(LIBS_A) -o $(NAME)

$(NAME_BONUS):			$(BONUS_OBJS) 
						$(foreach lib, $(LIBS), make all -C $(lib) ;)
						$(COMPILER) $(CFLAGS) $(BONUS_OBJS) $(LIBS_A) -o $(NAME_BONUS)

clean:
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)
						$(foreach lib, $(LIBS), make clean -C $(lib) ;)

fclean:					clean
						$(REMOVE) $(RFLAGS) $(NAME) $(NAME_BONUS)
						$(foreach lib, $(LIBS), make fclean -C $(lib) ;)

re:						fclean all
						$(foreach lib, $(LIBS), make re -C $(lib) ;)

.PHONY:					all clean fclean re

run:					$(NAME)
						$(SYSTEM)
						$(ARG) ./$(NAME) $$VAR

rerun:					re run

vrun:					$(NAME)
						$(SYSTEM)
						$(ARG) valgrind --leak-check=full -s -v ./$(NAME) $$VAR

rerun:					re run

b:						$(NAME_BONUS)
#						valgrind --leak-check=full -s ./$(NAME_BONUS) $(ARG)
						$(SYSTEM)
						$(ARG) ./$(NAME_BONUS) $$VAR
						$(REMOVE) $(RFLAGS) $(NAME_BONUS)
