# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 21:02:58 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/20 21:57:22 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBS_PATH			=	../
LIBS_NAME			=	libft
LIBS				=	$(foreach libname, $(LIBS_NAME), $(addprefix $(LIBS_PATH), libname)

SERVER_NAME			=	server.out

CLIENT_NAME			=	client.out

OBJS				=	

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror -I ./

MAKEFLAGS			+=	--silent

$(NAME):


$(SERVER_NAME):
					$(COMPILER) $(CFLAGS)

$(CLIENT_NAME):


all:				server.out client.out

clean:

fclean:				clean
					rm $(NAME)

re:
					fclean all

.PHONY:				clean fclean all re

run:
					make -C ../libft
					gcc server.c ../libft/libft.a -o $(SERVER_NAME) ; open -a Terminal -e ./$(SERVER_NAME)
					gcc client.c ../libft/libft.a -o $(CLIENT_NAME) && read -p "Enter server PID: " argv1 && ./$(CLIENT_NAME) $$argv1 "Put your sample text here"

#detected_OS:= $(shell uname)
#	ifeq ($(detected_OS),Linux)
#		make -C ../libft
#		gcc server.c ../libft/libft.a -o $(SERVER_NAME) ; open -a Terminal -e ./$(SERVER_NAME)
#		gcc client.c ../libft/libft.a -o $(CLIENT_NAME) && read -p "Enter server PID: " argv1 && ./$(CLIENT_NAME) $$argv1 "Put your sample text here"
#		gcc server.c ../libft/libft.a -o $(SERVER_NAME) ; cmd.exe /c start cmd.exe /c 'bash -c "/mnt/d/GoogleDrive/dev/42rio/42cursus/minitalk/server.out"'
#	else
#		make -C ../libft
#		gcc server.c ../libft/libft.a -o $(SERVER_NAME) ; open -a Terminal -e ./$(SERVER_NAME)
#		gcc client.c ../libft/libft.a -o $(CLIENT_NAME) && read -p "Enter server PID: " argv1 && ./$(CLIENT_NAME) $$argv1 "Put your sample text here"
#	endif
