# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 20:03:26 by egomes-j          #+#    #+#              #
#    Updated: 2023/03/16 07:33:02 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	main

SRCS	=	main.c

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra

install:
			sudo apt install libreadline-dev -y

clean:
		rm -drf main

run:
	make -C ./libft/ 
	$(CC) $(CFLAGS) $(SRCS) \
	-o $(NAME) \
	-I ./get_next_line/ -I ./libft/ \
	-L ./libft/ \
	-lft -lreadline
	./$(NAME)

