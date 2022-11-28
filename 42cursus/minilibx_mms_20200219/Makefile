#
#

NAME				=	libmlx.dylib

C_SRC				=	mlx_xpm.c \
						mlx_png.c \
						mlx_string_put.c\

C_OBJS				=	$(C_SRC:.c=.o)

SW_SRCs				=	mlx_image.swift \
						mlx_window.swift \
						mlx_init.swift \

SW_MODULES			=	$(SW_SRCs:.swift=.swiftmodule)

SW_INTERFACE		=	interface.swift $(SW_SRCs)

SW_OBJS					=	$(SW_INTERFACE:.swift=.o)

INCLUDE				=	-I.

COMPILER			=	cc

CFLAGS				=	-O3 -Wall -Wextra -Werror -w

.c.o:
						$(COMPILER) $(CFLAGS) -c $< -o $(@:.c=.o)

#OPTI				=	-Ounchecked
OPTI				=	-Wunused-argument

all:					$(NAME)

$(NAME):				$(SW_MODULES) $(SW_OBJS) $(C_OBJS)
						swiftc $(OPTI) $(INCLUDE) -o $(NAME) -emit-library $(SW_OBJS) $(C_OBJS) -lz

%.o:					%.swift
						swiftc $(OPTI) $(INCLUDE) -parse-as-library -c $< -o $@

%.swiftmodule:			%.swift
						swiftc $(OPTI) $(INCLUDE) -parse-as-library -c $< -o $@ -emit-module -module-name $(patsubst %.swift,%,$<) -module-link-name $(patsubst %.swift,%,$<)

clean:
						rm -f $(NAME) $(SW_OBJS) $(SW_MODULES) $(C_OBJS) *.swiftdoc *~

fclean:					clean

re:						fclean all

.PHONY:					all clean fclean re
