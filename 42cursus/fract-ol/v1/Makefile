# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 19:51:15 by ruchoa            #+#    #+#              #
#    Updated: 2023/06/11 17:52:57 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifeq ($(shell uname), Darwin) # MacOS
	SYSTEM			=	printf "\e[1;33mMacOS detected.\n\e[m"
	MLX_PATH		=	$(LIBS_PATH)libmlx/_macos/
	MLX_INCLUDE		=	-I $(MLX_PATH)
	MLX_LIBRAY		=	-L $(MLX_PATH)
	MLX_FLAGS		=	-lmlx -framework AppKit -framework OpenGL
	INTALL			=	Brew install Xquartz ; reboot
else 
	SYSTEM			=	printf "\e[1;33mLinux detected.\n\e[m"
	MLX_PATH		=	$(LIBS_PATH)libmlx/_linux/
	MLX_INCLUDE		=	-I $(MLX_PATH)
	MLX_LIBRAY		=	-L $(MLX_PATH)
	MLX_FLAGS		=	-O3 -lmlx -lXext -lX11 -lm -lz
	INSTALL			=	sudo apt install -y make gcc xorg libxext-dev libbsd-dev zlib1g-dev
endif

#MAKEFLAGS			=	--silent

NAME				=	fractol

LIBS_A				=	$(foreach lib, $(LIBS),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_DIR			=	$(foreach lib, $(LIBS),$(LIBS_PATH)$(lib)/)
LIBS_PATH			=	../../
LIBS				=	libft \
						libftprintf \

#-I <dir>				Add directory to include search path
INCLUDE_DIR			=	$(foreach lib, $(LIBS),-I $(LIBS_PATH)$(lib)/)

#-L <dir>				Add directory to library search path
LIBRARY_DIR			=	$(foreach lib, $(LIBS),-L $(LIBS_PATH)$(lib)/)

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror

AR					=	ar
AFLAGS				=	rc

REMOVE				=	rm
RFLAGS				=	-drf

SRCS				=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_OBJS			= 	$(SRCS:.c=.o)
SRCS_PATH			=	./
SRCS_LIST			=	fractol.c \
						ft_check_fractol.c \
						ft_draw.c \
						ft_events.c \
						ft_hooks.c \
						ft_init.c \
						ft_stes.c \

#						$(shell echo '$@ <- Nome da regra.')
#						$(shell echo '$< <- Nome da primeira dependência.')
#						$(shell echo '$^ <- Lista de dependências.')
#						$(shell echo '$? <- Lista de dependências mais recentes que a regra.')
#						$(shell echo '$* <- Nome do arquivo sem sufixo.')

.c.o:
						$(COMPILER) $(CFLAGS) $(INCLUDE_DIR) $(MLX_INCLUDE) -c $< -o $@

all:					$(NAME)

$(NAME):				$(SRCS_OBJS)
						$(foreach lib, $(LIBS_DIR), make all -sC $(lib);)
						make all -sC $(MLX_PATH)
						$(COMPILER) $(CFLAGS) $(SRCS_OBJS) $(LIBS_A) $(LIBRARY_DIR) $(MLX_LIBRAY) $(MLX_FLAGS) -o $(NAME)
						$(SYSTEM)

debug:					$(SRCS)
						$(foreach lib, $(LIBS_DIR), make all -sC $(lib);)
						make all -sC $(MLX_PATH)
						$(COMPILER) -g $(CFLAGS) $(SRCS) $(INCLUDE_DIR) $(MLX_INCLUDE) $(LIBS_A) $(LIBRARY_DIR) $(MLX_LIBRAY) $(MLX_FLAGS) -o $(NAME)
						$(SYSTEM)
						lldb ./$(NAME)

bonus:					all

clean:
						$(foreach lib, $(LIBS_DIR), make clean -sC $(lib);)
						make clean -sC $(MLX_PATH)
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS)

fclean:					clean
						$(foreach lib, $(LIBS_DIR), make fclean -sC $(lib);)
						make fclean -sC $(MLX_PATH)
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
						./$(NAME)

vrun:					$(NAME)
						valgrind --leak-check=full -s -v ./$(NAME)

rerun:					re run

rgb:
						gcc create_trgb.c -I ../libftprintf/ -L ../libftprintf/ -lftprintf -o a.out
						./a.out
						rm a.out
