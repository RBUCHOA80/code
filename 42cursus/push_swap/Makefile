# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 18:45:54 by ruchoa            #+#    #+#              #
#    Updated: 2023/01/02 21:58:38 by ruchoa           ###   ########.fr        #
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
BONUS_LIST			=	checker.c \

#						$(shell echo '$@ <- Nome da regra.')
#						$(shell echo '$< <- Nome da primeira dependência.')
#						$(shell echo '$^ <- Lista de dependências.')
#						$(shell echo '$? <- Lista de dependências mais recentes que a regra.')
#						$(shell echo '$* <- Nome do arquivo sem sufixo.')

ARR					=	ARG=$$(seq 5 | sort --random-sort | tr "\n" " ")
#ARR				=	ARG="-523 544 479 457 -415 -283 -237 -66 -543 -217 386 745 -827 -706 539 176 861 -811 -655 -968 742 -769 968 -444 -209 -158 -96 898 951 -957 -575 449 -785 -457 90 502 -233 -104 49 975 -223 563 -282 551 330 859 559 376 -885 -81 467 709 865 821 424 -705 -394 76 -960 -538 -835 -56 -127 184 770 649 -279 -156 -32 448 -166 909 -149 -403 130 102 -277 -421 -418 168 -816 -425 -290 -732 395 -874 989 910 124 385 405 426 -536 566 139 268 -690 905 888 86"

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
						$(SYSTEM)
						$(ARR) ; ./$(NAME) $$ARG
						$(ARR) ; ./$(NAME) $$ARG | wc -l
						$(ARR) ; ./$(NAME) $$ARG | ./$(CHECKER) $$ARG

vrun:					$(NAME)
						$(SYSTEM)
						$(ARR) ; valgrind --leak-check=full -s -v ./$(NAME) $$ARG
						$(ARR) ; ./$(NAME) $$ARG | wc -l
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
