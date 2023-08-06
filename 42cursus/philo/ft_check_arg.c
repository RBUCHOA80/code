#include "./philo.h"

int	ft_check_arg(char **argv)
{
	int	i;

	i = 0;
	while (argv[++i] != NULL)
	{
		if (ft_strcmp(ft_itoa(ft_atoi(argv[i])), argv[i]))
			return (1);
		printf("argv[%i] = %s\n", i, argv[i]);
	}
	return (0);
}
