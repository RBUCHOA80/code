# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/23 18:44:08 by egomes-j          #+#    #+#              #
#    Updated: 2022/08/27 19:07:29 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


#SRC			=		

CFLAGS		=		-Wall -Werror -Wextra

LIBFT_PATH	=		libft/Makefile

AR_PATH		=		libft/libft.a

NAME_CLIENT	=		client

NAME_SERVER	=		server

#MAKEFLAGS	=		--silent

libmake:
					cd libft && make all
					cd libft && make clean
	
all:				libmake $(NAME_CLIENT) $(NAME_SERVER)

$(NAME_CLIENT):		libmake
						gcc $(CFLAGS) -o client client.c $(AR_PATH)

$(NAME_SERVER):		libmake
						gcc $(CFLAGS) -o server server.c $(AR_PATH)

clean:
					rm -rf $(NAME_CLIENT) $(NAME_SERVER)
						cd libft && make fclean

fclean:				clean

re:					clean all

.PHONY:				all re clean fclean

run:
					rm -rf client server
					gcc client.c ./libft/*.c -o client
					gcc server.c ./libft/*.c -o server
					./server
