#/* ************************************************************************** */
#/*                                                                            */
#/*                                                        :::      ::::::::   */
#/*   Makefile                                           :+:      :+:    :+:   */
#/*                                                    +:+ +:+         +:+     */
#/*   By: big <rafade-o@student.42.rio>              +#+  +:+       +#+        */
#/*                                                +#+#+#+#+#+   +#+           */
#/*   Created: 2022/10/23 21:07:56 by big               #+#    #+#             */
#/*   Updated: 2022/10/23 17:48:02 by big              ###   ########.fr       */
#/*                                                                            */
#/* ************************************************************************** */

SRCS			= 	./sources/fractol.c
# MiniLibX
MLX			=	cd ./includes/mlx_linux && make 
MINI_LINUX	=	./includes/mlx_linux/libmlx_Linux.a
MINI		=	./includes/mlx_linux/libmlx.a

# libft
LIBFT		=	cd ./includes/libft && make
LIB		=	./includes/libft/libft.a

OBJS		=	$(SRCS:.c=.o)

CC			=	gcc

FLAGS		=	-Wall -Wextra -g

INCLUDE		=	-I include

NAME		=	fractol

all:	libft mlx $(NAME)
	
libft:
	@$(LIBFT)

mlx:
	@$(MLX)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $(OBJS) -Lmlx_linux $(MINI_LINUX) $(MINI) -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)

clean:
	@rm -rf $(OBJS)
	@cd ./includes/libft && make clean
	@make clean -C ./includes/mlx_linux

fclean: clean
	@rm -rf $(NAME)
	@cd ./includes/libft && make fclean
	@cd ./includes/mlx_linux && make clean

re:	fclean all

.PHONY: all libft fractol mlx clean fclean re
