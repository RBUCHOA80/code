#include <stdio.h>

int main()
{
	int a;
	int b;
	
	a = 42;
	b = 89;
	printf("Hello %d World! %d\n", a, b);
	b = a;
	a = 12;
	printf("Olá %d Mundo! %d\n", a, b);
	return (0);
}
