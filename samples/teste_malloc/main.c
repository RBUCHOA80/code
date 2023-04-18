#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	char	*str;

	//str = (char *)malloc(9);
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = 'd';
	str[4] = 'e';
	str[5] = 'f';
	str[6] = 'g';
	str[7] = 'h';
	str[8] = 'i';
	str[9] = '\0';
	printf("%p ", str);
	printf("str => %s\n", str);
	return (0);
}
