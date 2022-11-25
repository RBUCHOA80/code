INCLUDES_PATH	=	./includes/

SRCS_LIST		=	ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
SRCS_PATH		=	./srcs/
SRCS			=	${addprefix ${SRCS_PATH}, ${SRCS_LIST}}

OBJS			=	${SRCS:.c=.o}

COMPILER		=	gcc
CFLAGS			=	-Wall -Wextra -Werror -I ${INCLUDES_PATH}

AR				=	ar
AFLAGS			=	rc
LIB_NAME		=	libft.a

RM				=	rm -f

.c.o:
					${COMPILER} ${CFLAGS} -c $< -o ${<:.c=.o}

${LIB_NAME}:		${OBJS}
					${AR} ${AFLAGS} ${LIB_NAME} ${OBJS}

all:				${LIB_NAME}

clean:				
					${RM} ${OBJS}

fclean:				clean
					${RM} ${LIB_NAME}

re:					fclean all

.PHONY:				all clean fclean re
