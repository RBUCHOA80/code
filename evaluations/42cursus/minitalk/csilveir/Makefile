NAME = minitalk

SRCS_SERVER = server.c

SRCS_CLIENT = client.c

OBJS_SERVER = ${SRCS_SERVER:.c=.o}

OBJS_CLIENT = ${SRCS_CLIENT:.c=.o}

SRCS_SERVER_BONUS = server_bonus.c

SRCS_CLIENT_BONUS = client_bonus.c

OBJS_SERVER_BONUS = ${SRCS_SERVER_BONUS:.c=.o}

OBJS_CLIENT_BONUS = ${SRCS_CLIENT_BONUS:.c=.o}

SRCS_FT_libft = libft/ft_isalpha.c libft/ft_isdigit.c libft/ft_isalnum.c libft/ft_isascii.c libft/ft_isprint.c libft/ft_strlen.c libft/ft_memset.c libft/ft_bzero.c libft/ft_memcpy.c libft/ft_memmove.c libft/ft_strlcpy.c libft/ft_strlcat.c libft/ft_toupper.c libft/ft_tolower.c libft/ft_strchr.c libft/ft_strrchr.c libft/ft_strncmp.c libft/ft_memchr.c libft/ft_memcmp.c libft/ft_strnstr.c libft/ft_atoi.c libft/ft_calloc.c libft/ft_strdup.c libft/ft_substr.c libft/ft_strjoin.c libft/ft_strtrim.c libft/ft_split.c libft/ft_itoa.c libft/ft_strmapi.c libft/ft_striteri.c libft/ft_putchar_fd.c libft/ft_putstr_fd.c libft/ft_putendl_fd.c libft/ft_putnbr_fd.c libft/ft_putnbr_fd.c libft/ft_lstnew_bonus.c libft/ft_lstadd_front_bonus.c libft/ft_lstsize_bonus.c libft/ft_lstlast_bonus.c libft/ft_lstadd_back_bonus.c libft/ft_lstdelone_bonus.c libft/ft_lstclear_bonus.c libft/ft_lstiter_bonus.c libft/ft_lstmap_bonus.c

SRCS_printf = libft/auxi.c libft/auxi2.c libft/ft_printf.c 
 
SRCS_LIBFT = ${SRCS_FT_libft} ${SRCS_printf}
OBJS_LIBFT = ${SRCS_LIBFT:.c=.o}

CFLAGS = cc -Wall -Wextra -Werror

RM		= rm -rf

.c.o:
		${CFLAGS} -g -c $< -o ${<:.c=.o} -I ./

all:	libft server client

${NAME}:	${OBJS_PROJET}
		${CFLAGS} ${SRCS_PROJET} -o 

libft:	${OBJS_LIBFT}
		ar	rcs	libft.a ${OBJS_LIBFT}

server:		${OBJS_SERVER}
			${CFLAGS} ${SRCS_SERVER} -o server libft.a

client:		${OBJS_CLIENT}
			${CFLAGS} ${SRCS_CLIENT} -o client libft.a

server_bonus:	${OBJS_SERVER_BONUS}
				${CFLAGS} ${SRCS_SERVER_BONUS} -o server_bonus libft.a 

client_bonus:	${OBJS_CLIENT_BONUS}
				${CFLAGS} ${SRCS_CLIENT_BONUS} -o client_bonus libft.a

bonus:	libft server_bonus client_bonus

clean:
		${RM} ${OBJS_LIBFT} *.o

fclean:	clean
		${RM} libft.a client server .git client_bonus server_bonus


re:		fclean all

.PHONY: all clean fclean re

run:		all
			open -a Terminal -e ./server
			@read -p "Enter server PID: " argv1 && \
			./client $$argv1 "Put your sample text here."
