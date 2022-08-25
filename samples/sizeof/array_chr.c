#include <stdio.h>

char	g_chr[5][5] = {{11, 12, 13, 14, 15}, \
					{21, 22, 23, 24, 25}, \
					{31, 32, 33, 34, 35}, \
					{41, 42, 43, 44, 45}, \
					{51, 52, 53, 54, 55}};

int	main(void)
{
	int	chr_size_tot;
	int	chr_size_lin;
	int	chr_size_cel;

	chr_size_tot = sizeof(g_chr);
	chr_size_lin = sizeof(g_chr[0]);
	chr_size_cel = sizeof(g_chr[0][0]);

	printf("%i\n", chr_size_tot);
	printf("%i\n", chr_size_lin);
	printf("%i\n", chr_size_cel);
	return (0);
}
