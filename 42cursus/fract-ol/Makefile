# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 19:51:15 by ruchoa            #+#    #+#              #
#    Updated: 2022/12/06 21:16:13 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

NAME				=	fractol

#-I <dir>				Add directory to library search path
INCLUDE_DIR			=	$(foreach lib, $(INCLUDE_LIST),-I $(INCLUDE_PATH)$(lib)/_macos/)
INCLUDE_PATH		=	../
INCLUDE_LIST		=	mlx \

#-L <dir>				Add directory to library search path
LIBS_A				=	$(foreach lib, $(LIBS_LIST),-l$(lib))
LIBS_DIR			=	$(foreach lib, $(LIBS),-L $(lib))
LIBS				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/_macos/)
LIBS_PATH			=	../
LIBS_LIST			=	mlx \

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
SRCS_LIST			=	close.c \
						create_trgb.c \
						fractol.c \
						my_mlx_pixel_put.c \

#						$(shell echo '$@ <- Nome da regra.')
#						$(shell echo '$< <- Nome da primeira dependência.')
#						$(shell echo '$^ <- Lista de dependências.')
#						$(shell echo '$? <- Lista de dependências mais recentes que a regra.')
#						$(shell echo '$* <- Nome do arquivo sem sufixo.')

.c.o:
						$(COMPILER) $(CFLAGS) $(INCLUDE_DIR) -c $< -o $@

all:					$(NAME)

$(NAME):				$(SRCS_OBJS)
						$(foreach lib, $(LIBS), make all -C $(lib))
						$(OS)

clean:
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS)
						$(foreach lib, $(LIBS), make $@ -C $(lib))

fclean:					clean
						$(REMOVE) $(RFLAGS) $(NAME)
						$(foreach lib, $(LIBS), make $@ -C $(lib))

re:						fclean all

.PHONY:					all clean fclean re show

INSTALL				=	
						ifeq ($(shell uname), Darwin) # MacOS
							INSTALL	+=	printf "\e[1;33mMacOS detected.\e[m" ;
#brew install Xquartz
#reboot
#xeyes # run an hello world X11 app
						else ifeq ($(shell uname -r | grep 'WSL' | wc -l), 1) # Windows / WSL
							INSTALL	+=	printf "\e[1;33mWindows / WSL detected.\e[m" ; 
							INSTALL	+=	sudo apt update && sudo apt install xorg libxext-dev zlib1g-dev libbsd-dev ; 
						else ifeq ($(shell uname), Linux) # Native Linux
							INSTALL	+=	printf "\e[1;33mNative Linux detected.\e[m" ; 
						endif

OS					=	
						ifeq ($(shell uname), Darwin) # MacOS
							OS	+=	printf "\e[1;33mMacOS detected.\n\e[m" ;
							OS	+=	$(COMPILER) $(CFLAGS) $(SRCS_OBJS) $(LIBS_DIR) $(LIBS_A) $(FRAMEWORK) -o $(NAME) ;
						else ifeq ($(shell uname -r | grep 'WSL' | wc -l), 1) # Windows / WSL
							OS	+=	printf "\e[1;33mWindows / WSL detected.\n\e[m"
						else ifeq ($(shell uname), Linux) # Native Linux
							OS	+=	$(shell printf "\e[1;33mNative Linux detected.\n\e[m")
#							%.o: %.c
#								$(COMPILER) $(CFLAGS) -I/usr/include -Imlx_linux -O3 -c $< -o $@
#							$(NAME): $(SRCS_OBJS)
#								$(COMPILER) $(SRCS_OBJS) -Lmlx_linux -lmlx_Linux -L/usr/lib -Imlx_linux -lXext -lX11 -lm -lz -o $(NAME)
						endif

show:
						@printf "SYSTEM		: $(shell uname)\n"
						@printf "NAME		: $(NAME)\n"
						@printf "COMPILER	: $(COMPILER)\n"
						@printf "CFLAGS		: $(CFLAGS)\n"
						@printf "SRC		: $(SRCS)\n"

run:					re $(SRCS_OBJS)
						$(foreach lib, $(LIBS), make all -C $(lib))
						$(OS)
						./$(NAME)

#cc -Wall -Wextra -Werror ./fractol.o -L ../mlx/ -lmlx -framework AppKit -framework OpenGL -o fractol
