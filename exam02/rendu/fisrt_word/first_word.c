#include <unistd.h>

int	is_space(char c)
{
	if ((9 <= c && c <= 13) || c == 32)
		return (1);
	return (0);
}

void first_word(char *str)
{
	int	i;
	int	j;

	if (!str)
		return ;
	i = 0;
	while (str[i] && is_space(str[i]))
		i++;
	j = 0;
	while(str[i + j] && !is_space(str[i + j]))
		j++;
	if (j)
		write (1, &str[i], j);
	return ;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (1);
	}
	first_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}
