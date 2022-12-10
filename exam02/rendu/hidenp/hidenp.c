#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int len = 0;
	int count = 0;

	if (argc == 3)
	{
		while (argv[1][len])
			len++;
		i = 0;
		j = 0;
		while (argv[1][i] && argv[2][j])
		{
			while (argv[1][i] && (argv[1][i] != argv[2][j]) && argv[2][j])
					j++;
			if (argv[1][i] == argv[2][j])
				count++;
			i++;
		}
		if (count == len)
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}

