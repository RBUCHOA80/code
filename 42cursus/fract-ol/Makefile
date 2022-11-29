# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/28 19:51:15 by ruchoa            #+#    #+#              #
#    Updated: 2022/11/28 22:49:36 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

NAME				=	fract-ol

#-L <dir>				Add directory to library search path
LIBS				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/)
LIBS_A				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_PATH			=	../
LIBS_LIST			=	libft \
						libftprintf \

#-I <dir>				Add directory to include search path
INCLUDE				=	$(foreach inc, $(INCLUDE_LIST),$(INCLUDE_PATH)$(inc)/)
INCLUDE_PATH		=	./
INCLUDE_LIST		=	

#-framework OpenGL -framework AppKit
FRAMEWORK			=	$(foreach fram, $(FRAMEWORK_LIST),$(FRAMEWORK_PATH)$(fram))
FRAMEWORK_PATH		=	./
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
SRCS_LIST			=	push_swap.c \

#						$(shell echo '$@ <- Nome da regra.')
#						$(shell echo '$< <- Nome da primeira dependência.')
#						$(shell echo '$^ <- Lista de dependências.')
#						$(shell echo '$? <- Lista de dependências mais recentes que a regra.')
#						$(shell echo '$* <- Nome do arquivo sem sufixo.')

.c.o:
						$(COMPILER) $(CFLAGS) -c $< -o $(<:.c=.o)

all:					run

%.o: %.c
						$(COMPILER) $(CFLAGS) -Imlx -c $< -o $@

$(NAME):				$(SRCS_OBJS)
						$(COMPILER) $(SRCS_OBJS) -Lmlx -lmlx $(FRAMEWORK) -o $(NAME)

$(NAME):				$(SRCS_OBJS)
						$(foreach lib, $(LIBS), make all -C $(lib) ;)
						$(COMPILER) $(CFLAGS) $(SRCS_OBJS) $(LIBS_A) -o $(NAME)

clean:
						rm -drf $(SW_OBJS) $(SW_MODULES) $(C_OBJS) *.swiftdoc *~

fclean:					clean
						rm -drf $(NAME)

re:						fclean all

.PHONY:					all clean fclean re show

INSTALL					=	
						ifeq ($(shell uname -r | grep 'WSL' | wc -l), 1) # Windows / WSL
							INSTALL	+=	@printf "\e[1;33mWindows / WSL detected.\e[m" ; 
							INSTALL	+=	sudo apt update && sudo apt install xorg libxext-dev zlib1g-dev libbsd-dev ; 
						else ifeq ($(shell uname), Darwin) # MacOS
							INSTALL	+=	@printf '\e[1;33mMacOS detected.\e[m' ;
						else ifeq ($(shell uname), Linux) # Native Linux
							INSTALL	+=	@printf "\e[1;33mNative Linux detected.\e[m" ; 
						endif

OS					=	
						ifeq ($(shell uname -r | grep 'WSL' | wc -l), 1) # Windows / WSL
							OS	+=	@printf "\e[1;33mWindows / WSL detected.\e[m" ; 
						elif ($(shell uname), Darwin) # MacOS
							OS	+=	@printf '\e[1;33mMacOS detected.\e[m' ;
						elif ($(shell uname), Linux) # Native Linux
							OS	+=	@printf "\e[1;33mNative Linux detected.\e[m" ; 
						endif

show:
	@printf "OS			: $(OS)\n"
	@printf "NAME		: $(NAME)\n"
	@printf "NAME_UNAME	: $(NAME_UNAME)\n"
	@printf "COMPILER	: $(COMPILER)\n"
	@printf "CFLAGS		: $(CFLAGS)\n"
	@printf "SRC		:\n	$(SRCS)\n"
	@printf "OBJ		:\n	$(SRCS_OBJS)\n"

run:
						$(OS)
