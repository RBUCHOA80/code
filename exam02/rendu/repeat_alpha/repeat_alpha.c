#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int	alpha;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			if ('A' <= argv[1][i] && argv[1][i] <= 'Z')
			{
				alpha = 'A' - 1;
				j = argv[1][i] - alpha;
				while (j)
				{
					write(1, &argv[1][i], 1);
					j--;
				}
			}
			else if ('a' <= argv[1][i] && argv[1][i] <= 'z')
			{
				alpha = 'a' - 1;
				j = argv[1][i] - alpha;
				while (j)
				{
					write(1, &argv[1][i], 1);
					j--;
				}
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}

