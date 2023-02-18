NAME	=	rev_wstr

SRCS	=	rev_wstr.c \

run:
			gcc -g -o $(NAME) $(SRCS)
			./$(NAME) "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
			./$(NAME) "abcdefghijklm"
			./$(NAME) "Wingardium Leviosa" | cat -e
			./$(NAME)  | cat -e
