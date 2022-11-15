# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 19:31:43 by ruchoa            #+#    #+#              #
#    Updated: 2022/11/15 10:45:33 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

NAME				= 	libftprintf.a

NAME_BONUS			=	libftprintf_bonus.a

LIBS				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/)
LIBS_A				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_PATH			=	../
LIBS_LIST			=	

INCLUDE_PATH		=	./

COMPILER			= 	cc
CFLAGS				= 	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR					= 	ar
AFLAGS				= 	rc

REMOVE				= 	rm
RFLAGS				=	-drf

SRCS				=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_OBJS			= 	$(SRCS:.c=.o)
SRCS_PATH			=	./
SRCS_LIST			=	ft_character.c \
						ft_count.c \
						ft_decimal.c \
						ft_hexadecimal_lower.c \
						ft_hexadecimal_upper.c\
						ft_integer.c \
						ft_pointer.c \
						ft_printf.c \
						ft_put_u_nbr_fd.c \
						ft_puthex_fd.c \
						ft_puthex_low_fd.c \
						ft_puthex_upper_fd.c \
						ft_putnumber_fd.c \
						ft_string.c \
						ft_strlength.c \
						ft_unsigned_integer.c \

BONUS				=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS			=	$(BONUS:.c=.o)
BONUS_PATH			=	./
BONUS_LIST			=	

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
						$(AR) $(AFLAGS) $(NAME) $(LIBS_A) $(SRCS_OBJS)

$(NAME_BONUS):			$(BONUS_OBJS) 
						$(foreach dir, $(LIBS), make all -C $(dir) ;)
						$(AR) $(AFLAGS) $(NAME_BONUS) $(LIBS_A) $(BONUS_OBJS)

clean:
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)

fclean:					clean
						$(REMOVE) $(RFLAGS) $(NAME) $(NAME_BONUS)

re:						fclean all

.PHONY:					all clean fclean re

run:					$(NAME)
						$(COMPILER) $(CFLAGS) main.c $(LIBS_A) $(NAME) -o a.out
						./a.out
						$(REMOVE) $(RFLAGS) a.out*

vrun:					$(NAME)
						$(COMPILER) $(CFLAGS) main.c $(LIBS_A) $(NAME) -o a.out
						valgrind --leak-check=full -s -v ./a.out
						$(REMOVE) $(RFLAGS) a.out*
