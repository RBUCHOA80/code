# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 19:51:15 by ruchoa            #+#    #+#              #
#    Updated: 2023/07/30 14:56:54 by ruchoa           ###   ########.fr        #
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
	MLX_FLAGS		=	-O3 -lmlx -lXext -lX11 -lz
	INSTALL			=	sudo apt install -y make gcc xorg libxext-dev libbsd-dev zlib1g-dev
endif

#MAKEFLAGS			=	--silent

NAME				=	fractol

NAME_BONUS			=	fractol_bonus

LIBS_A				=	$(foreach lib, $(LIBS),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_DIR			=	$(foreach lib, $(LIBS),$(LIBS_PATH)$(lib)/)
LIBS_PATH			=	../
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
						ft_abs.c \
						ft_actions.c \
						ft_check_fractol.c \
						ft_color.c \
						ft_draw.c \
						ft_events.c \
						ft_init.c \
						ft_sets.c \

SRCS_BONUS			=	$(addprefix $(SRCS_PATH), $(SRCS_LIST_BONUS))
SRCS_OBJS_BONUS		= 	$(SRCS_BONUS:.c=.o)
SRCS_PATH_BONUS		=	./
SRCS_LIST_BONUS		=	fractol_bonus.c \
						ft_abs_bonus.c \
						ft_actions_bonus.c \
						ft_check_fractol_bonus.c \
						ft_color_bonus.c \
						ft_draw_bonus.c \
						ft_events_bonus.c \
						ft_init_bonus.c \
						ft_sets_bonus.c \

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
						$(SYSTEM)
						$(COMPILER) $(CFLAGS) $(SRCS_OBJS) $(LIBS_A) $(LIBRARY_DIR) $(MLX_LIBRAY) $(MLX_FLAGS) -o $(NAME)

bonus:					$(SRCS_OBJS_BONUS)
						$(foreach lib, $(LIBS_DIR), make all -sC $(lib);)
						make all -sC $(MLX_PATH)
						$(SYSTEM)
						$(COMPILER) $(CFLAGS) $(SRCS_OBJS_BONUS) $(LIBS_A) $(LIBRARY_DIR) $(MLX_LIBRAY) $(MLX_FLAGS) -o $(NAME_BONUS)

debug:					$(SRCS)
						$(foreach lib, $(LIBS_DIR), make all -sC $(lib);)
						make all -sC $(MLX_PATH)
						$(SYSTEM)
						$(COMPILER) -g $(CFLAGS) $(SRCS) $(INCLUDE_DIR) $(MLX_INCLUDE) $(LIBS_A) $(LIBRARY_DIR) $(MLX_LIBRAY) $(MLX_FLAGS) -o $(NAME)
						lldb ./$(NAME)

clean:
						$(foreach lib, $(LIBS_DIR), make clean -sC $(lib);)
						make clean -sC $(MLX_PATH)
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(SRCS_OBJS_BONUS)

fclean:					clean
						$(foreach lib, $(LIBS_DIR), make fclean -sC $(lib);)
						make fclean -sC $(MLX_PATH)
						$(REMOVE) $(RFLAGS) $(NAME) $(NAME_BONUS)

re:						fclean all

.PHONY:					all clean fclean re

show:
						@printf "SYSTEM		: $(shell uname)\n"
						@printf "NAME		: $(NAME)\n"
						@printf "COMPILER	: $(COMPILER)\n"
						@printf "CFLAGS		: $(CFLAGS)\n"
						@printf "SRC		: $(SRCS)\n"
						@printf "SRC_BONUS	: $(SRCS_BONUS)\n"

install:
						$(INSTALL)

run:					$(NAME)
						./$(NAME) m

brun:					$(NAME_BONUS)
						./$(NAME_BONUS) m

vrun:					$(NAME)
						valgrind --leak-check=full -s -v ./$(NAME) j 2

vbrun:					bonus
						valgrind --leak-check=full -s -v ./$(NAME_BONUS) j 2

rerun:					re run
