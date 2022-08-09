#include <stdio.h>

int ft_char2int(char arg[])
{
	int nb;
	int ret;
	nb = 0;
	ret = 0;
	while(arg[nb] != '\0')
	{
		// printf("%i %i\n", n, arg[n]);
		if(arg[nb] < 48 || arg[nb] > 57)
			return (-1);
		ret = (ret * 10) + arg[nb] - 48;
		nb = nb + 1;
	}
	printf("%i", ret);
	return (ret);
}

int	main(int num_args, char *arg[])
{
	// printf("%i", num_args);

	printf("\n");

	if((ft_char2int(arg[2])<0||ft_char2int(arg[3])<0))
		printf("numero invalido");

	return (0);
}
