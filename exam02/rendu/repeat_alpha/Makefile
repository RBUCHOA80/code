run:
	gcc -Wall -Wextra -Werror repeat_alpha.c -o repeat_alpha
	./repeat_alpha 'a' | cat -e
	./repeat_alpha 'b' | cat -e
	./repeat_alpha 'e' | cat -e
	./repeat_alpha "abc"
	./repeat_alpha "Alex." | cat -e
	./repeat_alpha 'abacadaba 42!' | cat -e
	./repeat_alpha | cat -e
	./repeat_alpha "" | cat -e
	rm repeat_alpha

gitar:
	git add repeat_alpha.c
	git commit -m "autogit"
	git push

