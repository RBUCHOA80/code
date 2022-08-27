# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 21:02:58 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/27 19:09:47 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS	+=	--silent

run:		
			make -C ./libft
			gcc server.c ./libft/libft.a -o server ; open -a Terminal -e ./server
			gcc client.c ./libft/libft.a -o client && read -p "Enter server PID: " argv1 && ./client $$argv1 "Put your sample text here"

