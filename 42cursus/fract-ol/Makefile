# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 19:51:15 by ruchoa            #+#    #+#              #
#    Updated: 2022/11/28 19:53:50 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				=	

COMPILER			=	CC

CFLAGS				=	-Wall -Wextra -Werror

%.o: %.c
	$(COMPILER) $(CFLAGS) -Imlx -c $< -o $@

clean:
						rm -drf $(SW_OBJS) $(SW_MODULES) $(C_OBJS) *.swiftdoc *~

fclean:					clean
						rm -drf $(NAME)

re:						fclean all

.PHONY:					all clean fclean re
