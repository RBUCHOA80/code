# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/01 12:11:47 by egomes-j          #+#    #+#              #
#    Updated: 2023/07/29 12:31:42 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol  
  
SRCS = fractol.c fractol_line.c put_pixel.c mandelbrot.c julia.c check_error.c\
		ft_atoi_fract.c ft_strcmp_fract.c handle.c
  
OBJS = ${SRCS:.c=.o} 
  
CC	= cc 
  
RM	= rm -f 
  
CFLAGS = -Wall -Wextra -Werror 
  
.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I /home/ruchoa/code/42cursus/libmlx/_linux
  
$(NAME):	${OBJS} 
				make -C /home/ruchoa/code/42cursus/libmlx/_linux
				$(CC) $(OBJS) -L /home/ruchoa/code/42cursus/libmlx/_linux -O3 -lmlx -lXext -lX11 -lm -lz -o $(NAME)

run:
		./$(NAME) julia 1
  
all:	${NAME} 
  
clean:
		${RM} ${OBJS}
		make clean -C /home/ruchoa/code/42cursus/libmlx/_linux/ 
  
fclean:		clean 
			${RM} ${NAME} 
  
re: fclean all 
  
.PHONY: all clean fclean re
