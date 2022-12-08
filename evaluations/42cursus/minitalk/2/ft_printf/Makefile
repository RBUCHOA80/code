SRCS = ft_printf.c ftprintfutils.c

OBJS = ${SRCS:.c=.o}

NAME = libftprintf.a

AR = ar rcs

CC = cc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror


$(NAME):	
			${CC} ${CFLAGS} -c ${SRCS}	
			${AR} ${NAME} ${OBJS} 

all: 		${NAME}

clean: 		
			${RM} ${OBJS}

fclean: 	clean
	    	${RM} $(NAME)

re: 		fclean all
	
