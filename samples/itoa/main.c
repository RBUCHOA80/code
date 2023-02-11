#include <stdio.h>

int	main(void)
{
	char	c[6];

	c[0] = 0b01100011;
	c[1] = 0141;
	c[2] = 115;
	c[3] = 0x61;
	c[4] = 's';
	c[5] = '\0';
	printf("%s\n", c);
	return (0);
}
