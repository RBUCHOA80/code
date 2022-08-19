SRCS_PATH	=	

SRCS_LIST	=	

NAME = get_next_line.a

$(NAME):	$(OBJS)
			$(AR)

all:
	@gcc -Wall -Wextra -Werror get_next_line.c get_next_line_utils.c
	@ar rc get_next_line.c get_next_line_utils.c

run:
	@gcc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=42
	@valgrind --leak-check=full ./a.out
	@time ./a.out
	@rm a.out

bonus:
	@gcc -Wall -Wextra -Werror main.c get_next_line_bonus.c get_next_line_utils_bonus.c -D BUFFER_SIZE=42
	@valgrind --leak-check=full ./a.out
	@time ./a.out
	@rm a.out
