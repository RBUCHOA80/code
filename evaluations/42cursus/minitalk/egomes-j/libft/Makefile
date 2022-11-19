# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/27 15:07:56 by egomes-j          #+#    #+#              #
#    Updated: 2022/05/28 12:14:11 by egomes-j         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ft_atoi.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
			  ft_isprint.c ft_memcmp.c ft_memset.c ft_strchr.c ft_strlcat.c\
			  ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c\
			  ft_tolower.c ft_toupper.c ft_bzero.c ft_calloc.c ft_memchr.c\
			  ft_memcpy.c ft_memmove.c ft_strdup.c ft_itoa.c ft_strtrim.c\
			  ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c\
			  ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c\
			  ft_split.c

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

NAME		= libft.a

AR			= ar

FLIB		= rcs

RLIB		= ranlib

RM			= /bin/rm -f

OBJ			= $(SRC:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJ) libft.h			
			@$(AR) $(FLIB) $(NAME) $(OBJ)
			@$(RLIB) $(NAME)

.c.o:
			@$(CC) $(CFLAGS) -I . -c $< -o $@

clean:
			@$(RM) $(OBJ)

fclean:		clean			
			@$(RM) $(NAME)

re:			fclean all

.PHONY:		all re clean fclean
