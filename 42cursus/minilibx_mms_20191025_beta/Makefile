#
#

NAME				=	libmlx.dylib

C_SRCS				=	mlx_xpm.c \
						mlx_png.c \
						mlx_string_put.c \

C_OBJS				=	$(C_SRCS:.c=.o)

SW_SRCS				=	mlx_image.swift \
						mlx_window.swift \
						mlx_init.swift \

SW_MODULES			=	$(SW_SRCS:.swift=.swiftmodule)

SW_INTERFACE		=	interface.swift $(SW_SRCS)

SW_OBJS				=	$(SW_INTERFACE:.swift=.o)

INCLUDE				=	-I.

COMPILER			=	cc

CFLAGS				=	-Wall -Wextra -Werror -w

.c.o:
						$(COMPILER) $(CFLAGS) -c $< -o $(@:.c=.o)

all:					$(NAME)

$(NAME):				$(SW_MODULES) $(SW_OBJS) $(C_OBJS)
						swiftc $(INCLUDE) -o $(NAME) -emit-library $(SW_OBJS) $(C_OBJS) -lz

%.o:					%.swift
						swiftc $(INCLUDE) -parse-as-library -c $< -o $@

%.swiftmodule:			%.swift
						swiftc $(INCLUDE) -parse-as-library -c $< -o $@ -emit-module -module-name $(patsubst %.swift,%,$<) -module-link-name $(patsubst %.swift,%,$<)

clean:
						rm -f $(NAME) $(SW_OBJS) $(SW_MODULES) $(C_OBJS) *.swiftdoc *~

fclean:					clean

re:						fclean all

.PHONY:					all clean fclean re
