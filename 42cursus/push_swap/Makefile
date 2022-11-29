# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/31 18:45:54 by ruchoa            #+#    #+#              #
#    Updated: 2022/11/28 20:33:54 by ruchoa           ###   ########.fr        #
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
SRCS_LIST			=	push_swap.c \
						ft_addint.c \
						ft_lst_take.c \
						ft_operation_reverse.c \
						ft_operation_rotate.c \
						ft_operation_push.c \
						ft_operation_swap.c \
						ft_printf_stacks.c \
						main.c \

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
						$(foreach lib, $(LIBS), make all -C $(lib) ;)
						$(COMPILER) $(CFLAGS) $(SRCS_OBJS) $(LIBS_A) -o $(NAME)

$(NAME_BONUS):			$(BONUS_OBJS) 
						$(foreach lib, $(LIBS), make all -C $(lib) ;)
						$(COMPILER) $(CFLAGS) $(BONUS_OBJS) $(LIBS_A) -o $(NAME_BONUS)

clean:
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)
						$(foreach lib, $(LIBS), make $@ -C $(lib) ;)

fclean:					clean
						$(REMOVE) $(RFLAGS) $(NAME) $(NAME_BONUS)
						$(foreach lib, $(LIBS), make $@ -C $(lib) ;)

re:						fclean all
						$(foreach lib, $(LIBS), make $@ -C $(lib) ;)

.PHONY:					all clean fclean re

ARG					=	
						ifeq ($(shell uname), Darwin) # MacOS
							ARG	+=	@printf "\e[1;33mMacOS detected.\e[m" ;
							ARG	+=	VAR=$$(echo {100..109}$$'\n' | sort --sort=random | tr "\n" " ") ;
						else ifeq ($(shell uname -r | grep 'WSL' | wc -l), 1) # Windows / WSL
							ARG	+=	@printf "\e[1;33mWindows / WSL detected.\e[m" ;
							ARG	+=	VAR="106 102 101 107 103 105 104 108 109 100" ;
#							ARG	+=	VAR=$$(echo {100..109}$$'\n' | sort --sort=random | tr "\n" " ") ;
						else ifeq ($(shell uname), Linux) # Native Linux
							ARG	+=	@printf "\e[1;33mNative Linux detected.\e[m" ;
							ARG	+=	VAR=$$(echo {100..109}$$'\n' | sort --sort=random | tr "\n" " ") ;
						endif

run:					$(NAME)
						$(ARG) ./$(NAME) $$VAR

vrun:					$(NAME)
						$(ARG) valgrind --leak-check=full -s -v ./$(NAME) $$VAR

b:						$(NAME_BONUS)
#						valgrind --leak-check=full -s ./$(NAME_BONUS) $(ARG)
						$(ARG) ./$(NAME_BONUS) $$VAR
						$(REMOVE) $(RFLAGS) $(NAME_BONUS)