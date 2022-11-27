#
#

NAME				=	libmlx.dylib

C_SRC				=	mlx_xpm.c \
						mlx_png.c \
						mlx_string_put.c\

C_OBJS				=	$(C_SRC:.c=.o)

SW_SRC				=	mlx_image.swift \
						mlx_window.swift \
						mlx_init.swift \

MODULE_OBJ			=	$(SW_SRC:.swift=.swiftmodule)

SRC					=	interface.swift $(SW_SRC)

OBJ					=	$(SRC:.swift=.o)

INCLUDE				=	-I.

COMPILER			=	cc

CFLAGS				=	-O3 -w

#OPTI				=	-Ounchecked

all:					$(NAME)

$(NAME):				$(MODULE_OBJ) $(OBJ) $(C_OBJS)
						swiftc $(OPTI) $(INCLUDE) -o $(NAME) -emit-library $(OBJ) $(C_OBJS) -lz

%.o:					%.swift
						swiftc $(OPTI) $(INCLUDE) -parse-as-library -c $< -o $@

%.swiftmodule:			%.swift
						swiftc $(OPTI) $(INCLUDE) -parse-as-library -c $< -o $@ -emit-module -module-name $(patsubst %.swift,%,$<) -module-link-name $(patsubst %.swift,%,$<)

clean:
						rm -f $(NAME) $(OBJ) $(MODULE_OBJ) $(C_OBJS) *.swiftdoc *~

fclean:					clean

re:						fclean all

.PHONY:					all clean fclean re
