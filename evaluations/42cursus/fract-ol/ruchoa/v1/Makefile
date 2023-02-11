# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 19:51:15 by ruchoa            #+#    #+#              #
#    Updated: 2023/02/11 16:59:51 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

NAME				=	fractol

LIBS_A				=	$(foreach lib, $(LIBS),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_DIR			=	$(foreach lib, $(LIBS),$(LIBS_PATH)$(lib)/)
LIBS_PATH			=	../
LIBS				=	libftprintf \

#-I <dir>				Add directory to library search path
INCLUDE_DIR			=	$(foreach lib, $(LIBS),-I $(LIBS_PATH)$(lib)/)

#-L <dir>				Add directory to library search path
LIBRARY_DIR			=	$(foreach lib, $(LIBS),-L $(LIBS_PATH)$(lib)/)

ifeq ($(shell uname), Darwin) # MacOS
	SYSTEM			=	printf "\e[1;33mMacOS detected.\n\e[m"
	MLX_LIB_DIR		=	$(LIBS_PATH)mlx/_macos/
	MLX_INCLUDE		=	-I $(MLX_LIB_DIR)
	MLX_LIB			=	-lmlx -framework AppKit -framework OpenGL
	INTALL			=	Brew install Xquartz ; reboot
else 
	SYSTEM			=	printf "\e[1;33mLinux detected.\n\e[m"
	MLX_LIB_DIR		=	$(LIBS_PATH)mlx/_linux/
	MLX_INCLUDE		=	-I $(MLX_LIB_DIR) -O3
	MLX_LIB			=	-lmlx -lXext -lX11 -lm -lz
	INSTALL			=	sudo apt install -y make gcc xorg libxext-dev libbsd-dev zlib1g-dev
endif

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror

AR					=	ar
AFLAGS				=	rc

REMOVE				=	rm
RFLAGS				=	-drf

SRCS				=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_OBJS			= 	$(SRCS:.c=.o)
SRCS_PATH			=	./
SRCS_LIST			=	events.c \
						fractol.c \
						my_mlx_pixel_put.c \

#						$(shell echo '$@ <- Nome da regra.')
#						$(shell echo '$< <- Nome da primeira dependência.')
#						$(shell echo '$^ <- Lista de dependências.')
#						$(shell echo '$? <- Lista de dependências mais recentes que a regra.')
#						$(shell echo '$* <- Nome do arquivo sem sufixo.')

.c.o:
						$(COMPILER) $(CFLAGS) $(INCLUDE_DIR) $(MLX_INCLUDE) -c $< -o $@

all:					$(NAME)

$(NAME):				$(SRCS_OBJS)
						make all -C $(MLX_LIB_DIR)
						$(foreach lib, $(LIBS_DIR), make all -C $(lib))
						$(COMPILER) $(CFLAGS) $(SRCS_OBJS) $(LIBS_A) $(LIBRARY_DIR) -L $(MLX_LIB_DIR) $(MLX_LIB) -o $(NAME)

clean:
						$(foreach lib, $(LIBS_DIR), make clean -C $(lib))
						make clean -C $(MLX_LIB_DIR)
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS)

fclean:					clean
						$(foreach lib, $(LIBS_DIR), make fclean -C $(lib))
						make fclean -C $(MLX_LIB_DIR)
						$(REMOVE) $(RFLAGS) $(NAME)

re:						fclean all
						$(foreach lib, $(LIBS_DIR), make re -C $(lib) ;)

.PHONY:					all clean fclean re show

show:
						@printf "SYSTEM		: $(shell uname)\n"
						@printf "NAME		: $(NAME)\n"
						@printf "COMPILER	: $(COMPILER)\n"
						@printf "CFLAGS		: $(CFLAGS)\n"
						@printf "SRC		: $(SRCS)\n"

install:
						$(INSTALL)

run:					$(NAME)
						$(SYSTEM)
						./$(NAME)

rerun:					re run

rgb:
						gcc create_trgb.c -I ../libftprintf/ -L ../libftprintf/ -lftprintf -o a.out
						./a.out
						rm a.out
