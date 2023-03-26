# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/09 22:35:12 by ruchoa            #+#    #+#              #
#    Updated: 2023/03/26 15:09:55 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifeq ($(shell uname), Darwin)	#MacOS
	SYSTEM			=	@printf "\e[1;33mMacOS detected.\n\e[m"
	MLX_PATH		=	$(LIBS_PATH)libmlx/_macos/
	MLX_FLAGS		=	-lmlx -framework AppKit -framework OpenGL
	INTALL			=	Brew install Xquartz ; reboot
else							#Linux
	SYSTEM			=	@printf "\e[1;33mLinux detected.\n\e[m"
	MLX_PATH		=	$(LIBS_PATH)libmlx/_linux/
	MLX_FLAGS		=	-lXext -lX11 -lm
	INSTALL			=	sudo apt install -y make gcc xorg libxext-dev libbsd-dev zlib1g-dev
endif

#MAKEFLAGS	=	--silent

NAME				=	fractol

LIBS_A				=	$(foreach lib, $(LIBS),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_DIR			=	$(foreach lib, $(LIBS),$(LIBS_PATH)$(lib)/)
LIBS_PATH			=	../../
LIBS				=	libft \

#-I <dir>				Add directory to include search path
INCLUDE_DIR			=	$(foreach lib, $(LIBS),-I $(LIBS_PATH)$(lib)/) \
						-I $(MLX_PATH) \

#-L <dir>				Add directory to library search path
LIBRARY_DIR			=	$(foreach lib, $(LIBS),-L $(LIBS_PATH)$(lib)/) \
						-L $(MLX_PATH) \

MLX					=	$(MLX_PATH)$(MLX_NAME)
MLX_NAME			=	libmlx.a

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror

AR					=	ar
AFLAGS				=	rc

REMOVE				=	rm
RFLAGS				=	-drf

SRCS				=	$(addprefix $(SRCS_PATH), $(SRC_LIST))
SRCS_OBJS			=	$(SRCS:.c=.o)
SRCS_PATH			=	./
SRC_LIST			=	color_schemes_interpolated.c \
						color_schemes_special.c \
						color_schemes_striped.c \
						color.c \
						events.c \
						fractal_sets_mandelbrot.c \
						fractal_sets_julia.c \
						fractal_sets_burning_ship.c \
						fractal_sets_tricorn.c \
						fractal_sets_mandelbox.c \
						fractol.c \
						ft_ishexdigit.c \
						ft_isspace.c \
						init.c \
						parse_args.c \
						render.c \
						utils.c \

#						$(shell echo '$@ <- Nome da regra.')
#						$(shell echo '$< <- Nome da primeira dependência.')
#						$(shell echo '$^ <- Lista de dependências.')
#						$(shell echo '$? <- Lista de dependências mais recentes que a regra.')
#						$(shell echo '$* <- Nome do arquivo sem sufixo.')

.c.o:
						$(COMPILER) $(CFLAGS) $(INCLUDE_DIR) -c $< -o $@

all:					$(NAME)

$(NAME):				$(SRCS_OBJS)
						$(foreach lib, $(LIBS_DIR), make all -sC $(lib))
						make -sC $(MLX_PATH)
						$(COMPILER) $(CFLAGS) -o $(NAME) $(SRCS_OBJS) $(MLX) $(LIBS_A) $(INCLUDE_DIR) $(LIBRARY_DIR) $(MLX_FLAGS)
						$(SYSTEM)

bonus:					all

clean:
						$(foreach lib, $(LIBS_DIR), make clean -sC $(lib))
						make clean -sC $(MLX_PATH)
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS)

fclean:					clean
						$(foreach lib, $(LIBS_DIR), make fclean -sC $(lib))
						$(REMOVE) $(RFLAGS) $(NAME)

re:						fclean all

.PHONY:					all clean fclean re

show:
						@printf "SYSTEM		: $(shell uname)\n"
						@printf "NAME		: $(NAME)\n"
						@printf "COMPILER	: $(COMPILER)\n"
						@printf "CFLAGS		: $(CFLAGS)\n"
						@printf "SRC		: $(SRCS)\n"

install:
						$(INSTALL)

run:					$(NAME)
						./$(NAME) M

vrun:					$(NAME)
						valgrind --leak-check=full -s -v ./$(NAME) M

rerun:					re run

rgb:
						gcc create_trgb.c -I ../libftprintf/ -L ../libftprintf/ -lftprintf -o a.out
						./a.out
						rm a.out
