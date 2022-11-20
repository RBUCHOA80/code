UNAME := $(shell uname)

NAME		= fractol

SRCS		= fractol.c fractol_utils.c color.c events.c mlx_utils.c 

OBJS		= $(SRCS:.c=.o)

ifeq ($(UNAME), Linux)
MINILIBX	= -Lmlx_linux -lmlx -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz
MLX			= mlx_linux
DEFINE		= -D ESC=65307 -D ONE=49 -D TWO=50 -D THREE=51 -D FOUR=52 -D PLUS=61 -D MINUS=45 -D SCRLDWN=5 -D SCRLUP=4
else
MINILIBX	= -Lmlx_mac -lmlx -framework OpenGL -framework appKit
MLX			= mlx_mac
DEFINE		= -D ESC=53 -D ONE=18 -D TWO=19 -D THREE=20 -D FOUR=21 -D PLUS=24 -D MINUS=27 -D SCRLDWN=4 -D SCRLUP=5
endif

LIBFT		= -Llibft -lft

CC			= cc

RM 			= rm -f

CFLAGS		= -Wall -Wextra -Ofast#-Werror

.c.o:
			$(CC) $(CFLAGS) $(DEFINE) -c $(SRCS)

$(NAME):	$(OBJS) libft minilibx compile

all:		$(NAME)

minilibx:
			cd $(MLX) && $(MAKE)

libft:
			cd libft && $(MAKE)

compile:
			$(CC) $(CFLAGS) $(OBJS) $(LIBFT) $(MINILIBX) $(DEFINE) -o $(NAME) 

clean:
			$(RM) $(OBJS)
			cd libft && $(MAKE) clean

fclean:		clean
			$(RM) $(NAME)
			$(RM) libft/libft.a
			cd $(MLX) && $(MAKE) clean

re:			fclean all

norminette:
			norminette $(SRCS)

.PHONY:		re fclean clean compile libft all minilibx $(NAME) norminette
