# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/14 20:03:26 by egomes-j          #+#    #+#              #
#    Updated: 2023/03/15 22:01:14 by egomes-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	main

SRCS	=	main.c

CC		=	gcc

CFLAGS	=	-Wall -Werror -Wextra


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

