#
#

NAME	=	libmlx.a

C_SRCS	=	mlx_xpm.c \
			mlx_shaders.c \
			mlx_int_str_to_wordtab.c \

C_OBJS	=	$(C_SRCS:.c=.o)

M_SRCS	=	mlx_new_window.m \
			mlx_init_loop.m \
			mlx_new_image.m \

M_OBJS	=	$(M_OBJS:.m=.o)

CFLAGS	+=	-O2

all:		$(NAME)

$(NAME):	$(C_OBJS) $(M_OBJS)
			ar -r $(NAME) $(C_OBJS) $(M_OBJS)
			ranlib $(NAME)

clean:
			rm -f $(NAME) $(C_OBJS) $(M_OBJS) *~
			rm -f mlx_app

fclean:		clean

re:			clean all
