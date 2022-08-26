# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 19:31:43 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/26 18:40:47 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS		=	--silent

NAME			= 	libftprintf.a

INCLUDE_PATH	=	./

COMPILER		= 	cc
CFLAGS			= 	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR				= 	ar
AFLAGS			= 	rc

REMOVE			= 	rm -f
RFLAGS			=	-rf

SRCS			=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_OBJS		= 	$(SRCS:.c=.o)
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

BONUS			=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS		=	$(BONUS:.c=.o)
BONUS_PATH		=	./
BONUS_LIST		=	

.c.o:
					$(COMPILER) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):			$(SRCS_OBJS) $(BONUS_OBJS)
					$(AR) $(AFLAGS) $(NAME) $(SRCS_OBJS) $(BONUS_OBJS)

all:				$(NAME)

clean:
					$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)

fclean:				clean
					$(REMOVE) $(RFLAGS) $(NAME)

re:					fclean all

.PHONY:				all clean fclean re

bonus:				$(SRCS_OBJS) $(BONUS_OBJS)
					$(AR) $(AFLAGS) $(NAME) $(SRCS_OBJS) $(BONUS_OBJS)

run:
					$(COMPILER) $(CFLAGS) *.c
#					valgrind --leak-check=full -s ./a.out
					./a.out
					$(REMOVE) $(RFLAGS) a.out*
