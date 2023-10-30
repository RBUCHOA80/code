# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/04 22:52:27 by ruchoa            #+#    #+#              #
#    Updated: 2023/10/29 21:07:45 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

NAME				=	minishell

LIBS_A				=	$(foreach lib, $(LIBS),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_DIR			=	$(foreach lib, $(LIBS),$(LIBS_PATH)$(lib)/)
LIBS_PATH			=	../
LIBS				=	libft \
						libftfprintf \

#-I <dir>				Add directory to include search path
INCLUDE_DIR			=	$(foreach lib, $(LIBS),-I $(LIBS_PATH)$(lib)/)

#-L <dir>				Add directory to library search path
LIBRARY_DIR			=	$(foreach lib, $(LIBS),-L $(LIBS_PATH)$(lib)/)

#-l						Add lib's *.a from directorys on path
LIBRARY				=	-lreadline

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror

AR					=	ar
AFLAGS				=	rc

REMOVE				=	rm
RFLAGS				=	-drf

SRCS				=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_OBJS			= 	$(SRCS:.c=.o)
SRCS_PATH			=	./
SRCS_LIST			=	srcs/main/main.c \
						srcs/main/minishell.c \
						srcs/bin/ft_exec_bin.c \
						srcs/bin/ft_get_arge.c \
						srcs/bin/ft_get_argv.c \
						srcs/bin/ft_is_bin.c \
						srcs/builtin/ft_cd.c \
						srcs/builtin/ft_echo.c \
						srcs/builtin/ft_env.c \
						srcs/builtin/ft_exec_builtin.c \
						srcs/builtin/ft_exit.c \
						srcs/builtin/ft_export.c \
						srcs/builtin/ft_is_builtin.c \
						srcs/builtin/ft_pwd.c \
						srcs/builtin/ft_unset.c \
						srcs/env/ft_search_env.c \
						srcs/history/ft_history.c \
						srcs/main/ft_banner.c \
						srcs/main/ft_init.c \
						srcs/pipe/ft_pipe.c \
						srcs/signal/ft_signal.c \
						srcs/tool/ft_expand.c \
						srcs/tool/ft_get_cmd.c \
						srcs/tool/ft_parse.c \
						srcs/tool/ft_prepare_data.c \
						srcs/tool/ft_strcmp.c \
						srcs/tool/ft_tokenize.c \

#						$(shell echo '$@ <- Nome da regra.')
#						$(shell echo '$< <- Nome da primeira dependência.')
#						$(shell echo '$^ <- Lista de dependências.')
#						$(shell echo '$? <- Lista de dependências mais recentes que a regra.')
#						$(shell echo '$* <- Nome do arquivo sem sufixo.')

.c.o:
						$(COMPILER) $(CFLAGS) $(INCLUDE_DIR) -c $< -o $@

all:					$(NAME)

$(NAME):				$(SRCS_OBJS)
						$(foreach lib, $(LIBS_DIR), make all -sC $(lib);)
						$(COMPILER) $(CFLAGS) $(SRCS_OBJS) $(LIBS_A) $(LIBRARY_DIR) -o $(NAME) $(LIBRARY)

debug:
						$(foreach lib, $(LIBS_DIR), make all -sC $(lib);)
						$(COMPILER) $(CFLAGS) -g $(SRCS) $(INCLUDE_DIR) $(LIBS_A) $(LIBRARY_DIR) -o $(NAME) $(LIBRARY)
						lldb ./$(NAME)

clean:
						$(foreach lib, $(LIBS_DIR), make clean -sC $(lib);)
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS)

fclean:					clean
						$(foreach lib, $(LIBS_DIR), make fclean -sC $(lib);)
						$(REMOVE) $(RFLAGS) $(NAME)

re:						fclean all

.PHONY:					all clean fclean re

show:
						@printf "SYSTEM		: $(shell uname)\n"
						@printf "NAME		: $(NAME)\n"
						@printf "COMPILER	: $(COMPILER)\n"
						@printf "CFLAGS		: $(CFLAGS)\n"
						@printf "SRC		: $(SRCS)\n"

run:					$(NAME)
						./$(NAME)

valgrind:				re
						valgrind --leak-check=full --show-leak-kinds=all -s -v --track-origins=yes ./$(NAME)

install:
						sudo apt install libreadline-dev -y

rerun:					re run
