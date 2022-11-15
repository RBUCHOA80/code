# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/21 23:54:00 by ruchoa            #+#    #+#              #
#    Updated: 2022/11/15 14:02:59 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

SERVER_NAME			=	server

CLIENT_NAME			=	client

NAME				=	$(SERVER_NAME) $(CLIENT_NAME)

NAME_BONUS			=	$(SERVER_NAME)_bonus $(CLIENT_NAME)_bonus

LIBS				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/)
LIBS_A				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_PATH			=	../
LIBS_LIST			=	libft \

INCLUDE_PATH		=	./

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR					= 	ar
AFLAGS				= 	rc

REMOVE				=	rm
RFLAGS				=	-drf

SRCS				=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_OBJS			= 	$(SRCS:.c=.o)
SRCS_PATH			=	./
SRCS_LIST			=	$(SERVER_NAME).c \
						$(CLIENT_NAME).c \

BONUS				=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS			=	$(BONUS:.c=.o)
BONUS_PATH			=	./
BONUS_LIST			=	$(SERVER_NAME)_bonus.c \
						$(CLIENT_NAME)_bonus.c \

#						$(shell echo '$@ <- Nome da regra.')
#						$(shell echo '$< <- Nome da primeira dependência.')
#						$(shell echo '$^ <- Lista de dependências.')
#						$(shell echo '$? <- Lista de dependências mais recentes que a regra.')
#						$(shell echo '$* <- Nome do arquivo sem sufixo.')

.c.o:
						$(COMPILER) $(CFLAGS) -c $< -o $(@:.c=.o)

all:					$(NAME)

bonus:					$(NAME_BONUS)

$(SERVER_NAME):			$(SERVER_NAME).o
						$(foreach lib, $(LIBS), make all -C $(lib) ;)
						$(COMPILER) $(CFLAGS) $@.c $(LIBS_A) -o $@

$(CLIENT_NAME):			$(CLIENT_NAME).o
						$(foreach lib, $(LIBS), make all -C $(lib) ;)
						$(COMPILER) $(CFLAGS) $@.c $(LIBS_A) -o $@

$(NAME):				$(SRCS_OBJS)

$(NAME_BONUS):			$(BONUS_OBJS)
						$(foreach lib, $(LIBS), make all -C $(lib) ;)
						$(COMPILER) $(CFLAGS) $(LIBS_A) $@.c -o $@

clean:
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)

fclean:					clean
						$(REMOVE) $(RFLAGS) $(NAME) $(NAME_BONUS)

re:						fclean all

.PHONY:					all clean fclean re

RUN_SERVER			=	$(COMPILER) $(CFLAGS) $(SERVER_NAME).c $(LIBS_A) -o $(SERVER_NAME) ;
ifeq ($(shell pgrep --newest $(SERVER_NAME)), )
	ifeq ($(shell uname), Darwin) # MacOS
		RUN_SERVER	+=	echo "\e[1;33mMacOS detected.\e[m" ;
		RUN_SERVER	+=	open -a Terminal -e ./$(SERVER_NAME) &
	else ifeq ($(shell uname -r | grep 'WSL' | wc -l), 1) # Windows / WSL
		RUN_SERVER	+=	echo "\e[1;33mWindows / WSL detected.\e[m" ;
		RUN_SERVER	+=	cmd.exe /c start cmd.exe /c 'bash -c "/mnt/d/GoogleDrive/code/42rio/42cursus/minitalk/$(SERVER_NAME)"' &
	else ifeq ($(shell uname), Linux) # Native Linux
		RUN_SERVER	+=	echo "\e[1;33mNative Linux detected.\e[m" ;
		RUN_SERVER	+=	x-terminal-emulator -e "./$(SERVER_NAME)" &
	endif
endif

#RUN_CLIENT			=	$(COMPILER) $(CFLAGS) $(CLIENT_NAME).c $(LIBS_A) -o $(CLIENT_NAME) ; read -p "Enter $(SERVER_NAME) PID: " argv1 && time ./$(CLIENT_NAME) $$argv1
RUN_CLIENT			=	$(COMPILER) $(CFLAGS) $(CLIENT_NAME).c $(LIBS_A) -o $(CLIENT_NAME) ;
ifeq ($(shell pgrep --newest $(SERVER_NAME)), )
	RUN_CLIENT		+=	sleep 1 ;
	RUN_CLIENT		+=	make $@
else ifneq ($(shell pgrep --newest $(SERVER_NAME)), )
	RUN_CLIENT		+=	time ./$(CLIENT_NAME) $(shell pgrep --newest $(SERVER_NAME)) $(1000)
endif

run: $(NAME)
	 $(RUN_SERVER)
	 $(RUN_CLIENT)

SAMPLE = "Put your sample text here."

200 = "Put your sample text here.200"

500 = "Put your sample text here.500"

1000 = "Put your sample text here.1000"
