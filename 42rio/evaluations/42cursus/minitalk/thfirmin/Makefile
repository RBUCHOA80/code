# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 21:02:58 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/20 20:28:44 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS	+=	--silent

run:		
			make -C ./libft
			gcc server.c ./libft/libft.a -o server.out ; open -a Terminal -e ./server.out
			gcc client.c ./libft/libft.a -o client.out && read -p "Enter server PID: " argv1 && ./client.out $$argv1 "a"
