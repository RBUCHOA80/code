NAME	= so_long

SRCS	= 	so_long.c \
			so_long_map.c \
			so_long_sprites.c \
			so_long_render.c \
			so_long_hooks.c \
			so_long_end.c

LIBFT = ./libft

CC		= cc
RM		= rm -f

CFLAGS 	= -Wall -Werror -Wextra

OBJS	= $(SRCS:.c=.o)


detected_OS := $(shell uname)
ifeq ($(detected_OS),Linux)
MLX		= ./mlx_linux
OCFLAGS	= $(CFLAGS) -L $(MLX) -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz
else
MLX		= ./mlx
OCFLAGS	= $(CFLAGS) -L $(MLX) -lmlx -framework OpenGL -framework AppKit
endif

$(NAME):	$(OBJS)
	make -C $(LIBFT)
	make -C $(MLX)
	$(CC) $(OBJS) $(LIBFT)/libft.a $(OCFLAGS) -o $(NAME)

all:	$(NAME)

clean:
		make clean -C $(MLX)
		$(RM) $(OBJS)

fclean:	clean
		make fclean -C $(LIBFT)
		make clean -C $(MLX)
		$(RM) $(NAME)

re:		fclean all

debug: $(OBJS)
	make -C $(LIBFT)
	make -C $(MLX)
	gcc $(OBJS) $(LIBFT)/libft.a -g $(OCFLAGS) -o $(NAME)

valgrind: all
	valgrind --leak-check=full --show-reachable=yes --show-leak-kinds=all --error-limit=no --gen-suppressions=all --log-file=lib.log ./$(NAME) maps/map1.ber

.PHONY: all clean fclean re