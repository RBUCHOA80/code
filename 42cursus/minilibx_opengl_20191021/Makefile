#
#

NAME				=	libmlx.a

C_SRCS				=	mlx_xpm.c \
						mlx_png.c \
						mlx_shaders.c \
						mlx_int_str_to_wordtab.c \

C_OBJS				=	$(C_SRCS:.c=.o)

M_SRCS				=	mlx_new_window.m \
						mlx_init_loop.m \
						mlx_new_image.m \
						mlx_mouse.m \

M_OBJS				=	$(M_SRCS:.m=.o)

COMPILER			=	cc

CFLAGS				=	-O2 -w

# add to match string put with X11 in size and position
CFLAGS				+=	-DSTRINGPUTX11

all:					$(NAME)

$(NAME):				$(C_OBJS) $(M_OBJS)
						ar -r $(NAME) $(C_OBJS) $(M_OBJS)
						ranlib $(NAME)

clean:
						rm -f $(NAME) $(C_OBJS) $(M_OBJS) *~
						rm -f mlx_app

fclean:					clean

re:						fclean all

.PHONY:					all clean fclean re
