# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/12 19:31:43 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/25 19:21:10 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS	=	--silent

SRC			=	ft_character.c \
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

CC			= 	cc

CFLAGS		= 	-Wall -Wextra -Werror -I ./

NAME		= 	libftprintf.a

AR			= 	ar

ARFLAGS		= 	rc

RM			= 	rm -f

OBJ			= 	$(SRC:.c=.o)

.c.o:
				$(CC) $(CFLAGS) -c $< -o $@

$(NAME):		$(OBJ)
				$(AR) $(ARFLAGS) $(NAME) $(OBJ)

all:			$(NAME)

clean:
				$(RM) $(OBJ)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all


.PHONY:			all re clean fclean


run:
				@clang -Wall -Wextra -Werror *.c
				@valgrind --leak-check=full ./a.out
				@rm -drf a.out.dSYM
				@rm -rf a.out
				@cat ./sample.txt
