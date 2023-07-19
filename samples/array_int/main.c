#include <stdio.h>

void ft_print_array(int* vetor, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("nbr[%i] = %i\n", i, vetor[i]);
		i++;
	}
}

int main(void)
{
	int	vetor[] = {10, 30, 5, 'a', 8, -543, 54};
	int size;

	size = sizeof(vetor)/sizeof(*vetor);
	ft_print_array(vetor, size);
	return (0);
}
