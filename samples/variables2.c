#include <stdio.h>

int main()
{
	char	c1;
	c1 = 'j';
	printf("%lu %d %c\n", sizeof(c1), c1, c1);
	
	unsigned char	c3;
	c3 = 'j';
	printf("%lu %d %c\n", sizeof(c3), c3, c3);
	
	int	i1;
	i1 = 21;
	printf("%lu %d\n", sizeof(i1), i1);
	
	unsigned int	i2;
	i2 = 22;
	printf("%lu %d\n", sizeof(i2), i2);
	
	long int	i3;
	i3 = 23;
	printf("%lu %ld\n", sizeof(i3), i3);
	
	long long int	i4;
	i4 = 24;
	printf("%lu %lld\n", sizeof(i4), i4);
	
	short int	i5;
	i5 = 25;
	printf("%lu %d\n", sizeof(i5), i5);
	
	float	f;
	f = 12.37;
	printf("%lu %f\n", sizeof(f), f);
	
	double	d;
	d = 543.569;
	printf("%lu %f\n", sizeof(d), d);
	
}
