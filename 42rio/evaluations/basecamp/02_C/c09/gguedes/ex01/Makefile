all: libft.a

libft.a: srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o
	ar rcs libft.a srcs/ft_putchar.o srcs/ft_putstr.o srcs/ft_strcmp.o srcs/ft_strlen.o srcs/ft_swap.o

srcs/ft_putchar.o:
	gcc -c -Wall -Wextra -Werror -I ./includes/ srcs/ft_putchar.c -o srcs/ft_putchar.o

srcs/ft_putstr.o:
	gcc -c -Wall -Wextra -Werror -I ./includes/ srcs/ft_putstr.c -o srcs/ft_putstr.o

srcs/ft_strcmp.o:
	gcc -c -Wall -Wextra -Werror -I ./includes/ srcs/ft_strcmp.c -o srcs/ft_strcmp.o

srcs/ft_strlen.o:
	gcc -c -Wall -Wextra -Werror -I ./includes/ srcs/ft_strlen.c -o srcs/ft_strlen.o

srcs/ft_swap.o:
	gcc -c -Wall -Wextra -Werror -I ./includes/ srcs/ft_swap.c -o srcs/ft_swap.o

clean:
	rm -rf srcs/*.o

fclean:
	rm -rf srcs/*.o libft.a

re:
	make --no-print-directory fclean all

.PHONY:	all clean fclean re