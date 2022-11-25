#include <stdio.h>

int	g_nbr[5][5] = {{11, 12, 13, 14, 15}, \
					{21, 22, 23, 24, 25}, \
					{31, 32, 33, 34, 35}, \
					{41, 42, 43, 44, 45}, \
					{51, 52, 53, 54, 55}};

int	main(void)
{
	int	nbr_size_tot;
	int	nbr_size_lin;
	int	nbr_size_cel;

	nbr_size_tot = sizeof(g_nbr);
	nbr_size_lin = sizeof(g_nbr[0]);
	nbr_size_cel = sizeof(g_nbr[0][0]);

	printf("%i\n", nbr_size_tot);
	printf("%i\n", nbr_size_lin);
	printf("%i\n", nbr_size_cel);
	return (0);
}
