# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 18:45:54 by ruchoa            #+#    #+#              #
#    Updated: 2023/03/25 21:48:31 by ruchoa           ###   ########.fr        #
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

#-I <dir>				Add directory to include search path
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
						ft_inorder.c \
						ft_isvalid_entry.c \
						ft_lsttake_back.c \
						ft_lsttake_front.c \
						ft_max.c \
						ft_operation_push.c \
						ft_operation_reverse.c \
						ft_operation_rotate.c \
						ft_operation_swap.c \
						ft_printf_stks.c \
						ft_search_index.c \
						ft_str_to_int.c \
						main.c \
						push_swap.c \

BONUS				=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS			=	$(BONUS:.c=.o)
BONUS_PATH			=	./
BONUS_LIST			=	c	 \

ARR					=	ARG=$$(seq 5 | sort --random-sort | tr "\n" " ")

ifeq ($(shell uname), Darwin)	#MacOS
	SYSTEM			=	@printf "\e[1;33mMacOS detected.\n\e[m"
	CHECKER			=	checker_Mac
else 							#Linux
	SYSTEM			=	@printf "\e[1;33mLinux detected.\n\e[m"
	CHECKER			=	checker_linux
endif

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

.PHONY:					all clean fclean re visualizer

run:					$(NAME)
						$(ARR) ; ./$(NAME) $$ARG

vrun:					$(NAME)
						$(ARR) ; valgrind --leak-check=full -s -v ./$(NAME) $$ARG

wc:						$(NAME)
						./$(NAME) $$ARG | wc -l

check:					$(NAME)
						$(SYSTEM)
						$(ARR) ; ./$(NAME) $$ARG | ./$(CHECKER) $$ARG

rerun:					re run

b:						$(NAME_BONUS)
#						valgrind --leak-check=full -s ./$(NAME_BONUS) $(ARG)
						$(ARR) ; ./$(NAME) $$ARG

SIZE	=	5
COUNT	=	10
test:					$(NAME)
						bash ./tester/tester.sh ../$(NAME) $(SIZE) $(COUNT)

tall:					$(NAME)
						bash ./tester/tester.sh ../$(NAME) 3 $(COUNT)
						bash ./tester/tester.sh ../$(NAME) 5 $(COUNT)
						bash ./tester/tester.sh ../$(NAME) 100 $(COUNT)
						bash ./tester/tester.sh ../$(NAME) 500 $(COUNT)

visualizer:				$(NAME)
						mkdir -p ./visualizer/build
						cmake -S ./visualizer/ -B ./visualizer/build/
						make -C ./visualizer/build/
						./visualizer/build/bin/visualizer
