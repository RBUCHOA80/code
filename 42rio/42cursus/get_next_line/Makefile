# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/25 19:42:31 by ruchoa            #+#    #+#              #
#    Updated: 2022/10/10 21:36:49 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

NAME				=	get_next_line.a

NAME_BONUS			=	get_next_line_bonus.a

LIBS				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/)
LIBS_A				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_PATH			=	../
LIBS_LIST			=	libft

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
SRCS_LIST			=	get_next_line.c

BONUS				=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS			=	$(BONUS:.c=.o)
BONUS_PATH			=	./
BONUS_LIST			=	get_next_line_bonus.c

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
						$(AR) $(AFLAGS) $(NAME) $(LIBS_O) $(SRCS_OBJS)

$(NAME_BONUS):			$(BONUS_OBJS) 
						$(foreach dir, $(LIBS), make all -C $(dir) ;)
						$(AR) $(AFLAGS) $(NAME_BONUS) $(LIBS_O) $(BONUS_OBJS)

clean:
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)

fclean:					clean
						$(REMOVE) $(RFLAGS) $(NAME) $(NAME_BONUS)

re:						fclean all

.PHONY:					all clean fclean re

run:					$(NAME)
						$(COMPILER) $(CFLAGS) $(NAME) main.c -o a.out
						./a.out
						$(REMOVE) $(RFLAGS) a.out*

vrun:					$(NAME)
						$(COMPILER) $(CFLAGS) $(NAME) main.c -o a.out
						valgrind --leak-check=full -s ./a.out
						$(REMOVE) $(RFLAGS) a.out*

b:						$(NAME_BONUS)
						$(COMPILER) $(CFLAGS) $(NAME_BONUS) main.c
#						valgrind --leak-check=full -s ./a.out
						./a.out
						$(REMOVE) $(RFLAGS) a.out*
