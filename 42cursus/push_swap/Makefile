# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 18:45:54 by ruchoa            #+#    #+#              #
#    Updated: 2023/01/08 19:12:46 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

NAME				=	push_swap

NAME_BONUS			=	
	LIBS				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/)
LIBS_A				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_PATH			=	../
LIBS_LIST			=	libft \
						libftprintf \

INCLUDE_PATH		=	./

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR					=	ar
AFLAGS				=	rc

REMOVE				=	rm
RFLAGS				=	-drf

SRCS				=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_OBJS			= 	$(SRCS:.c=.o)
SRCS_PATH			=	./
SRCS_LIST			=	ft_argv_to_list.c \
						ft_bubble_sort.c \
						ft_content_from_template.c \
						ft_create_template.c \
						ft_isvalid_entry.c \
						ft_lsttake_back.c \
						ft_lsttake_front.c \
						ft_operation_push.c \
						ft_operation_reverse.c \
						ft_operation_rotate.c \
						ft_operation_swap.c \
						ft_printf_stacks.c \
						ft_str_to_int.c \
						main.c \
						push_swap.c \

BONUS				=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS			=	$(BONUS:.c=.o)
BONUS_PATH			=	./
BONUS_LIST			=	c	 \

#						$(shell echo '$@ <- Nome da regra.')
#						$(shell echo '$< <- Nome da primeira dependência.')
#						$(shell echo '$^ <- Lista de dependências.')
#						$(shell echo '$? <- Lista de dependências mais recentes que a regra.')
#						$(shell echo '$* <- Nome do arquivo sem sufixo.')

ARR					=	ARG=$$(seq 5 | sort --random-sort | tr "\n" " ")

ifeq ($(shell uname), Darwin)	#MacOS
	SYSTEM	=	@printf "\e[1;33mMacOS detected.\n\e[m"
	CHECKER	=	checker_Mac
else 							#Linux
	SYSTEM	=	@printf "\e[1;33mLinux detected.\n\e[m"
	CHECKER	=	checker_linux
endif

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
						$(ARR) ; ./$(NAME) $$ARG

vrun:					$(NAME)
						$(ARR) ; valgrind --leak-check=full -s -v ./$(NAME) $$ARG

wc:						$(NAME)
						$(SYSTEM)
						$(ARR) ; ./$(NAME) $$ARG | wc -l

check:					$(NAME)
						$(SYSTEM)
						$(ARR) ; ./$(NAME) $$ARG | ./$(CHECKER) $$ARG

rerun:					re run

b:						$(NAME_BONUS)
#						valgrind --leak-check=full -s ./$(NAME_BONUS) $(ARG)
						$(SYSTEM)
						$(ARG) ; ./$(NAME_BONUS) $$VAR
						$(REMOVE) $(RFLAGS) $(NAME_BONUS)

SIZE	=	5
TIMES	=	10
test:					$(NAME)
						bash ./tester/tester.sh ../$(NAME) $(SIZE) $(TIMES)

visualizer:				$(NAME)
						./visualizer/build/bin/visualizer
