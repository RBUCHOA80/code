SRCS	=	ft_isalnum.c\
		   	ft_isalpha.c\
		   	ft_isdigit.c\
		   	ft_isascii.c\
		   	ft_isprint.c\
			ft_strlen.c\
			ft_toupper.c\
			ft_tolower.c\
			ft_strchr.c\
			ft_strrchr.c\
			ft_strncmp.c\
			ft_strlcpy.c\
			ft_memset.c\
			ft_bzero.c\
			ft_memcpy.c\
			ft_memmove.c\
			ft_calloc.c\
			ft_strdup.c\
			ft_memchr.c\
			ft_memcmp.c\
			ft_strnstr.c\
			ft_strlcat.c\
			ft_atoi.c\
			ft_putchar_fd.c\
			ft_putstr_fd.c\
			ft_putendl_fd.c\
			ft_putnbr_fd.c\
			ft_substr.c\
			ft_strtrim.c\
			ft_strmapi.c\
			ft_striteri.c\
			ft_strjoin.c\
			ft_itoa.c\
			ft_split.c

OBJS	= 	${SRCS:.c=.o}

BONUS	=	ft_lstnew.c\
			ft_lstadd_front.c\
			ft_lstsize.c\
			ft_lstlast.c\
			ft_lstadd_back.c\
			ft_lstdelone.c\
			ft_lstclear.c

OBJS_B	=	${BONUS:.c=.o}

NAME	=	libft.a

CC		= 	cc

RM		= 	rm -f

CFLAGS	= 	-Wall -Wextra -Werror

.c.o:	= 	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
			ar rcs ${NAME} ${OBJS}

all:		${NAME}

bonus:		${NAME} ${OBJS_B}
			ar rcs ${NAME} ${OBJS_B}

clean:		
			${RM} ${OBJS} ${OBJS_B}

fclean: 	clean
			${RM} ${NAME}

re:			fclean all

.PHONY:	all clean fclean re	bonus
