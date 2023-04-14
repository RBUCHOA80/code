#include <stdio.h>
#include <stdlib.h>

void record(char **str)
{
	*str = "text 2 ";
}

int	main(void)
{
	char	*str_heap;
	char	*str_stack;

	str_stack = "sample text";
	printf("str_stack => %s\n", str_stack);
	record(&str_stack);
	printf("str_stack => %s\n", str_stack);

	str_heap = NULL;
	printf("str_heap => %s\n", str_heap);
	record(&str_heap);
	printf("str_heap => %s\n", str_heap);
	return (0);
}
