#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "../../libft/libft.h"

int	main(int argc, char **argv)
{
	int	i;
	(void)argc;
	
	i = 0;
	while (argv[++i] != NULL)
	{
		printf("char *argv[%i] = \"%s\"\n", i, argv[i]);
		printf("int atoi      =  %i\n", atoi(argv[i]));
		printf("char *ft_itoa = \"%s\"\n", ft_itoa(atoi(argv[i])));
		printf("\"%s\" = = \"%s\"\n", ft_itoa(atoi(argv[i])), argv[i]);
		printf("int strcmp    = %i\n", strcmp(ft_itoa(atoi(argv[i])), argv[i]));
	}
	return (0);
}
