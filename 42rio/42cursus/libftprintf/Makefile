# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 19:31:43 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/25 22:22:29 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS		=	--silent

INCLUDE_PATH	=	./

COMPILER		= 	cc
CFLAGS			= 	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR				= 	ar
ARFLAGS			= 	rc

NAME			= 	libftprintf.a

REMOVE			= 	rm -f
RFLAGS			=	-rf

SRCS			=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_PATH		=	./
SRCS_LIST		=	ft_character.c \
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
					ft_putnbr_fd.c \
					ft_string.c \
					ft_strlength.c \
					ft_unsigned_integer.c \

OBJS			= 	$(SRCS:.c=.o)

.c.o:
					$(COMPILER) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):			$(OBJS)
					$(AR) $(AFLAGS) $(NAME) $(OBJS)

all:				$(NAME)

clean:
					$(REMOVE) $(OBJS)

fclean:				clean
					$(REMOVE) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re

BONUS			=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_PATH		=	./
BONUS_LIST		=	

BONUS_OBJS		=	$(BONUS:.c=.o)

bonus:				$(OBJS) $(BONUS_OBJS)
					$(AR) $(AFLAGS) $(NAME) $(OBJS) $(BONUS_OBJS)

run:
					cc -Wall -Wextra -Werror *.c
					valgrind --leak-check=full ./a.out
					rm -drf a.out*
