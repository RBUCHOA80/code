# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 19:51:15 by ruchoa            #+#    #+#              #
#    Updated: 2022/12/10 21:22:58 by ruchoa           ###   ########.fr        #
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

#MLX					Minilibx dependences and command line
ifeq ($(shell uname), Darwin) # MacOS
	MLX_INCLUDE		+=	-I $(MLX_LIB_DIR)
	MLX_LIB_DIR		+=	$(LIBS_PATH)mlx/_macos/
	MLX_LIB			+=	-lmlx
	COMP			+=	printf "\e[1;33mMacOS detected.\n\e[m" ;
	COMP			+=	$(COMPILER) $(CFLAGS) $(SRCS_OBJS) $(LIBS_A) $(LIBRARY_DIR) -L $(MLX_LIB_DIR) $(MLX_LIB) $(FRAMEWORK) -o $(NAME) ;
else ifeq ($(shell uname -r | grep 'WSL' | wc -l), 1) # Windows / WSL
	MLX_INCLUDE		+=	-I $(MLX_LIB_DIR)
	MLX_LIB_DIR		+=	$(LIBS_PATH)mlx/_linux/
	MLX_LIB			+=	-lmlx -lXext -lX11 -lm -lz
	COMP			+=	printf "\e[1;33mWindows / WSL detected.\n\e[m" ;
	COMP			+=	$(COMPILER) $(CFLAGS) $(SRCS_OBJS) $(LIBS_A) $(LIBRARY_DIR) -L $(MLX_LIB_DIR) $(MLX_LIB) -o $(NAME) ;
else ifeq ($(shell uname), Linux) # Native Linux
	MLX_INCLUDE		+=	-I $(MLX_LIB_DIR) -O3
	MLX_LIB_DIR		+=	$(LIBS_PATH)mlx/_linux/
	MLX_LIB			+=	-lmlx -lXext -lX11 -lm -lz
	COMP			+=	printf "\e[1;33mNative Linux detected.\n\e[m" ;
	COMP			+=	$(COMPILER) $(CFLAGS) $(SRCS_OBJS) $(LIBS_A) $(LIBRARY_DIR) -L $(MLX_LIB_DIR) $(MLX_LIB) -o $(NAME) ;
endif

#-framework AppKit -framework OpenGL
FRAMEWORK			=	$(foreach framework, $(FRAMEWORK_LIST),-framework $(framework))
FRAMEWORK_LIST		=	AppKit \
						OpenGL \

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

clean:
						$(foreach lib, $(LIBS_DIR), make clean -C $(lib))
						make clean -C $(MLX_LIB_DIR)
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS)

fclean:					clean
						$(foreach lib, $(LIBS_DIR), make fclean -C $(lib))
						make fclean -C $(MLX_LIB_DIR)
						$(REMOVE) $(RFLAGS) $(NAME)

re:						fclean all

.PHONY:					all clean fclean re show

show:
						@printf "SYSTEM		: $(shell uname)\n"
						@printf "NAME		: $(NAME)\n"
						@printf "COMPILER	: $(COMPILER)\n"
						@printf "CFLAGS		: $(CFLAGS)\n"
						@printf "SRC		: $(SRCS)\n"

run:					$(SRCS_OBJS)
						$(foreach lib, $(LIBS_DIR), make all -C $(lib))
						make all -C $(MLX_LIB_DIR)
						$(COMP)
						./$(NAME)

rerun:					re run

rgb:
						gcc create_trgb.c -I ../libftprintf/ -L ../libftprintf/ -lftprintf -o a.out
						./a.out
						rm a.out
