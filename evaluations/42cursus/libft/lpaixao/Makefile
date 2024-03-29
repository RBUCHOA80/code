# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 19:07:24 by ruchoa            #+#    #+#              #
#    Updated: 2023/02/11 17:03:58 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#MAKEFLAGS			=	--silent

NAME				=	libft.a

NAME_BONUS			=	libft_bonus.a

LIBS				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/)
LIBS_A				=	$(foreach lib, $(LIBS_LIST),$(LIBS_PATH)$(lib)/$(lib).a)
LIBS_PATH			=	../
LIBS_LIST			=	

#-I <dir>				Add directory to include search path
INCLUDE_PATH		=	./

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR					=	ar
AFLAGS				=	rc

REMOVE				=	rm
RFLAGS				=	-drf

SRCS				=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))
SRCS_OBJS			=	$(SRCS:.c=.o)
SRCS_PATH			=	./
SRCS_LIST			=	ft_atoi.c \
						ft_bzero.c \
						ft_calloc.c \
						ft_isalnum.c \
						ft_isalpha.c \
						ft_isascii.c \
						ft_isdigit.c \
						ft_isprint.c \
						ft_itoa.c \
						ft_lstadd_back.c \
						ft_lstadd_front.c \
						ft_lstclear.c \
						ft_lstdelone.c \
						ft_lstiter.c \
						ft_lstlast.c \
						ft_lstmap.c \
						ft_lstnew.c \
						ft_lstsize.c \
						ft_memchr.c \
						ft_memcmp.c \
						ft_memcpy.c \
						ft_memmove.c \
						ft_memset.c \
						ft_putchar_fd.c \
						ft_putendl_fd.c \
						ft_putnbr_fd.c \
						ft_putstr_fd.c \
						ft_split.c \
						ft_strchr.c \
						ft_strdup.c \
						ft_striteri.c \
						ft_strjoin.c \
						ft_strlcat.c \
						ft_strlcpy.c \
						ft_strlen.c \
						ft_strmapi.c \
						ft_strncmp.c \
						ft_strnstr.c \
						ft_strrchr.c \
						ft_strtrim.c \
						ft_substr.c \
						ft_tolower.c \
						ft_toupper.c \

BONUS				=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))
BONUS_OBJS			=	$(BONUS:.c=.o)
BONUS_PATH			=	./
BONUS_LIST			=	ft_lstadd_back.c \
						ft_lstadd_front.c \
						ft_lstclear.c \
						ft_lstdelone.c \
						ft_lstiter.c \
						ft_lstlast.c \
						ft_lstmap.c \
						ft_lstnew.c \
						ft_lstsize.c \

#						$(shell echo '$@ <- Nome da regra.')
#						$(shell echo '$< <- Nome da primeira dependência.')
#						$(shell echo '$^ <- Lista de dependências.')
#						$(shell echo '$? <- Lista de dependências mais recentes que a regra.')
#						$(shell echo '$* <- Nome do arquivo sem sufixo.')

.c.o:
						$(COMPILER) $(CFLAGS) -c $< -o $(@:.c=.o)

all:					$(NAME)

bonus:					$(NAME_BONUS)

$(NAME):				$(SRCS_OBJS)
						$(foreach dir, $(LIBS), make all -C $(dir) ;)
						$(AR) $(AFLAGS) $(NAME) $(SRCS_OBJS)

$(NAME_BONUS):			$(BONUS_OBJS) 
						$(foreach dir, $(LIBS), make all -C $(dir) ;)
						$(AR) $(AFLAGS) $(NAME_BONUS) $(LIBS_A) $(BONUS_OBJS)

clean:
						$(REMOVE) $(RFLAGS) $(SRCS_OBJS) $(BONUS_OBJS)
						$(foreach lib, $(LIBS), make $@ -C $(lib) ;)

fclean:					clean
						$(REMOVE) $(RFLAGS) $(NAME) $(NAME_BONUS)
						$(foreach lib, $(LIBS), make $@ -C $(lib) ;)

re:						fclean all
						$(foreach lib, $(LIBS), make $@ -C $(lib) ;)

.PHONY:					all clean fclean re

run:					$(NAME)
						$(COMPILER) $(CFLAGS) main.c $(NAME) -o a.out
						./a.out
						$(REMOVE) $(RFLAGS) a.out*

rerun:					re run

vrun:					$(NAME)
						$(COMPILER) $(CFLAGS) main.c $(NAME) -o a.out
						valgrind --leak-check=full -s ./a.out
						$(REMOVE) $(RFLAGS) a.out*

so:						
						$(COMPILER) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
						$(COMPILER) -nostartfiles -shared -o libft.so $(SRCS_OBJS)
