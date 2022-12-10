NAME = alpha_mirror

run:
	gcc -Wall -Wextra -Werror $(NAME).c -o $(NAME)
	./alpha_mirror "abc"
	./alpha_mirror "My horse is Amazing." | cat -e
	./alpha_mirror | cat -e
	rm $(NAME)

gitar:
	git add $(NAME).c
	git commit -m "autogit"
	git push

