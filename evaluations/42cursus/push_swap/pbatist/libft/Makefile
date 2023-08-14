# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/08/14 16:57:31 by pabatist          #+#    #+#              #
#    Updated: 2023/08/14 16:57:33 by pabatist         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCES	=	libc/ft_atoi.c libc/ft_bzero.c libc/ft_calloc.c libc/ft_isalnum.c
SOURCES	+=	libc/ft_isalpha.c libc/ft_isascii.c libc/ft_isdigit.c libc/ft_isprint.c
SOURCES	+=	libc/ft_memchr.c libc/ft_memcmp.c libc/ft_memcpy.c
SOURCES	+=	libc/ft_memmove.c libc/ft_memset.c extrafunctions/ft_putchar_fd.c
SOURCES	+=	libc/ft_strlcpy.c libc/ft_strlen.c libc/ft_strncmp.c
SOURCES	+=	libc/ft_strnstr.c libc/ft_strrchr.c libc/ft_substr.c
SOURCES	+=	libc/ft_tolower.c libc/ft_toupper.c libc/ft_strlcat.c libc/ft_strchr.c

SOURCES	+=	extrafunctions/ft_putendl_fd.c extrafunctions/ft_putnbr_fd.c
SOURCES	+=	extrafunctions/ft_putstr_fd.c extrafunctions/ft_split.c
SOURCES	+=	extrafunctions/ft_strdup.c extrafunctions/ft_striteri.c
SOURCES	+=	extrafunctions/ft_strjoin.c extrafunctions/ft_strmapi.c
SOURCES	+=	extrafunctions/ft_strtrim.c extrafunctions/ft_itoa.c
SOURCES	+=	extrafunctions/ft_itoa_base.c extrafunctions/ft_count_digits_base.c

SOURCES	+=	get_next_line/get_next_line_utils.c get_next_line/get_next_line_bonus.c
SOURCES	+=	get_next_line/get_next_line_utils_bonus.c get_next_line/get_next_line.c

SOURCES +=	ft_printf/ft_printf.c ft_printf/ft_char_type.c ft_printf/ft_printf_utils.c
SOURCES	+=	ft_printf/ft_string_type.c ft_printf/ft_hex_lower_type.c
SOURCES +=	ft_printf/ft_hex_upper_type.c ft_printf/ft_int_type.c ft_printf/ft_unsigned_type.c
SOURCES +=	ft_printf/ft_pointer_type.c ft_printf/ft_percent_type.c

OBJECTS	=	$(SOURCES:.c=.o)

BONUS_SOURCES	=	extrafunctions/ft_lstnew.c extrafunctions/ft_lstadd_front.c 
BONUS_SOURCES	+=	extrafunctions/ft_lstsize.c extrafunctions/ft_lstclear.c
BONUS_SOURCES	+=	extrafunctions/ft_lstadd_back.c extrafunctions/ft_lstdelone.c
BONUS_SOURCES	+=	extrafunctions/ft_lstmap.c extrafunctions/ft_lstiter.c extrafunctions/ft_lstlast.c

BONUS_OBJECTS	=	$(BONUS_SOURCES:.c=.o)

NAME	=	libft.a

CC	=	cc

AR_RC	=	ar rc

CFLAGS	=	-Wall -Werror -Wextra

RM	=	rm -f

$(NAME):	$(OBJECTS)
		@$(AR_RC) $(NAME) $(OBJECTS)

.c.o:	
	@$(CC) $(CFLAGS) -c -I . $< -o $(<:.c=.o)

all:	$(NAME)

bonus:	$(BONUS_OBJECTS)
	@$(AR_RC) $(NAME) $(BONUS_OBJECTS)

clean:
		@$(RM) $(OBJECTS) $(BONUS_OBJECTS)

fclean:	clean
		@$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
