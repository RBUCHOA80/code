NAME	=	libtest.a

SRCS	=	ft_prod.c \
			ft_soma.c \

OBJS	=	$(SRCS:.c=.o)

all:		$(NAME)

$(NAME):	$(OBJS)
			ar rc $(NAME) $(OBJS)

run:		$(NAME) run2
			gcc main.c $(NAME) -o libtest
			./libtest
			ls -l

run2:
			gcc main.c $(SRCS) -o libtest2
			./libtest2
			ls -l
