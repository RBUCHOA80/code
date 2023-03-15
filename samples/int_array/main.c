
#include <stdio.h> //printf
#include <stdlib.h> //malloc

int	main(void)
{
	int	array[] = {-3, -5, -9, 0, 10, 99, 21};

	printf("%d\n", array[0]);
	return (0);
}

void	ft_print_array(int *array, int len)
{
	int	i;

	i = 0;
	while(len)
	{
		printf("%d\n", array[i]);
		len--;
		i++;
	}

}
int	main(void)
{
	int	*array;
	int	count;
	int	start;
	int	end;

	start = 0;
	end = -3;
	if (start > end)
		count = (start - end) + 1;
	else
		count = (end - start) + 1;
	array = (int *)malloc(count * sizeof(int));
	ft_print_array(array, count);
	return (0);
}