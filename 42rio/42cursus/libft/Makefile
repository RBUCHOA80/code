# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 19:07:24 by ruchoa            #+#    #+#              #
#    Updated: 2022/08/25 19:19:38 by ruchoa           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MAKEFLAGS			=	--silent

INCLUDE_PATH		=	./

SRCS_PATH			=	./

SRCS_LIST			=	ft_atoi.c\
						ft_bzero.c\
						ft_calloc.c\
						ft_isalnum.c\
						ft_isalpha.c\
						ft_isascii.c\
						ft_isdigit.c\
						ft_isprint.c\
						ft_itoa.c\
						ft_memchr.c\
						ft_memcmp.c\
						ft_memcpy.c\
						ft_memmove.c\
						ft_memset.c\
						ft_putchar_fd.c\
						ft_putendl_fd.c\
						ft_putnbr_fd.c\
						ft_putstr_fd.c\
						ft_split.c\
						ft_strchr.c\
						ft_strdup.c\
						ft_striteri.c\
						ft_strjoin.c\
						ft_strlcat.c\
						ft_strlcpy.c\
						ft_strlen.c\
						ft_strmapi.c\
						ft_strncmp.c\
						ft_strnstr.c\
						ft_strrchr.c\
						ft_strtrim.c\
						ft_substr.c\
						ft_tolower.c\
						ft_toupper.c\

SRCS				=	$(addprefix $(SRCS_PATH), $(SRCS_LIST))

OBJS				=	$(SRCS:.c=.o)

BONUS_PATH			=	./

BONUS_LIST			=	ft_lstadd_back.c\
						ft_lstadd_front.c\
						ft_lstclear.c\
						ft_lstdelone.c\
						ft_lstiter.c\
						ft_lstlast.c\
						ft_lstmap.c\
						ft_lstnew.c\
						ft_lstsize.c\

BONUS				=	$(addprefix $(BONUS_PATH), $(BONUS_LIST))

BONUS_OBJS			=	$(BONUS:.c=.o)

COMPILER			=	cc
CFLAGS				=	-Wall -Wextra -Werror -I $(INCLUDE_PATH)

AR					=	ar
AFLAGS				=	-rc
NAME				=	libft.a

REMOVE				=	rm
RFLAGS				=	-f

.c.o:
						$(COMPILER) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):				$(OBJS) $(BONUS_OBJS)
						$(AR) $(AFLAGS) $(NAME) $(OBJS) $(BONUS_OBJS)

all:					$(NAME)


clean:
						$(REMOVE) $(RFLAGS) $(OBJS) $(BONUS_OBJS)

fclean:					clean
						$(REMOVE) $(RFLAGS) $(NAME)

re:						fclean all


.PHONY:					all clean fclean re bonus so


bonus:					$(OBJS) $(BONUS_OBJS)
						$(AR) $(AFLAGS) $(NAME) $(OBJS) $(BONUS_OBJS)

so:
						$(COMPILER) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
						$(COMPILER) -nostartfiles -shared -o libft.so $(OBJS)

