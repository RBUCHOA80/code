# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/18 21:02:58 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/18 23:55:39 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIBS_PATH	=	../
LIBS_NAME	=	libft
LIBS		=	$(foreach libname, $(LIBS_NAME), $(addprefix $(LIBS_PATH), libname)

NAME		=	libmini_talk.a

OBJS		=	

$(NAME):

all:		$(NAME)

clean:		

fclean:		clean
			rm $(NAME)

re:
			fclean all

.PHONY:		clean fclean all re

run:		
			@make -C ../libft
			@gcc server.c ../libft/libft.a -o server.out ; open -a Terminal -e ./server.out
			@gcc client.c ../libft/libft.a -o client.out
			@read -p "Enter server PID: " argv1 && \
			./client.out $$argv1 "Put your sample text here."