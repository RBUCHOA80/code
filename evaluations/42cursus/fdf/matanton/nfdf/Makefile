# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 15:45:42 by matanton          #+#    #+#              #
#    Updated: 2023/02/11 12:23:56 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = fdf.c fdf_utils.c images_events.c fdf_isometric.c \

OBJS = $(SRCS:.c=.o)

NAME = fdf

LIBFT = ./libft/libft.a

AR = ar rcs

RM = rm -f

CC = cc

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

CFLAGS = -Wall -Werror -Wextra

OFLAGS = -L ./minilibx -lm -lmlx $(LIBFT) -framework OpenGL -framework Appkit

all: $(NAME)
	
$(MLX):
	@make -s -C ./minilibx

$(LIBFT):
	@make -s -l -C ./libft
	@cp ./libft/libft.a ./

$(NAME): $(OBJS) $(LIBFT) $(MLX)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(OFLAGS)

clean:
	$(RM) fdf
	$(RM) ./libft/*.o
	$(RM) *.o

fclean: clean
	$(RM) libft.a
	$(RM) ./libft/libft.a

re: fclean all

.PHONY: all clean fclean re

