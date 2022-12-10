#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int mirror;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if ('A' <= argv[1][i] && argv[1][i] <= 'M')
			{
				mirror = argv[1][i] - 'A';
				mirror = 'Z' - mirror;
				write(1, &mirror, 1);
			}
			else if ('N' <= argv[1][i] && argv[1][i] <= 'Z')
			{
				mirror = argv[1][i] - 'N';
				mirror = 'M' - mirror;	
				write(1, &mirror, 1);
			}

			else if ('a' <= argv[1][i] && argv[1][i] <= 'm')
			{
				mirror = argv[1][i] - 'a';
				mirror = 'z' - mirror;
				write(1, &mirror, 1);
			}
			else if ('n' <= argv[1][i] && argv[1][i] <= 'z')
			{
				mirror = argv[1][i] - 'n';
				mirror = 'm' - mirror;
				write(1, &mirror, 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
