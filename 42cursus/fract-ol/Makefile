MAKEFLAGS	=	--silent
NAME		=	fractol

CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror

MLX_PATH	=	../mlx/_linux/
MLX_NAME	=	libmlx.a
MLX			=	$(MLX_PATH)$(MLX_NAME)

LIBFT_PATH	=	../libft/
LIBFT_NAME	=	libft.a
LIBFT		=	$(LIBFT_PATH)$(LIBFT_NAME)

INC			=	-I ./includes/ \
				-I $(LIBFT_PATH) \
				-I $(MLX_PATH) \

SRC_PATH	=	src/
SRC			=	fractol.c \
				color.c \
				events.c \
				ft_ishexdigit.c \
				ft_isspace.c \
				help_msg.c \
				initialization.c \
				parse_args.c \
				render.c \
				utils.c \
				fractal_sets/mandelbrot.c \
				fractal_sets/julia.c \
				fractal_sets/burning_ship.c \
				fractal_sets/tricorn.c \
				fractal_sets/mandelbox.c \
				color_schemes/color_interpolated.c \
				color_schemes/color_special.c \
				color_schemes/color_striped.c \

SRCS		=	$(addprefix $(SRC_PATH), $(SRC))

OBJ_PATH	=	obj/
OBJ			=	$(SRC:.c=.o)
OBJS		=	$(addprefix $(OBJ_PATH), $(OBJ))

all: 			$(MLX) $(LIBFT) $(NAME)

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
				$(CC) $(CFLAGS) -c $< -o $@ $(INC)

$(OBJS):		$(OBJ_PATH)

$(OBJ_PATH):
				mkdir -p $(OBJ_PATH)
				mkdir -p $(OBJ_PATH)fractal_sets/
				mkdir -p $(OBJ_PATH)color_schemes/

$(MLX):
				make -sC $(MLX_PATH)

$(LIBFT):
				make -sC $(LIBFT_PATH)

$(NAME):		$(OBJS)
				make -C $(MLX_PATH)
				make -C $(LIBFT_PATH)
				$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(MLX) $(LIBFT) $(INC) -lXext -lX11 -lm

bonus:			all

run:			$(NAME)
				./$(NAME) M

rerun:			re run

clean:
				rm -rf $(OBJ_PATH)
				make clean -C $(MLX_PATH)
				make clean -C $(LIBFT_PATH)

fclean:			clean
				rm -f $(NAME)
				rm -f $(LIBFT_PATH)$(LIBFT_NAME)

re:				fclean all

.PHONY:			all re clean fclean
