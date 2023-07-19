#include <stdio.h> //printf

int	ft_negativo(int* vetor);
int	ft_positivo(int* vetor);

int main(void)
{
	int vetor[] = {10, 30, -15, 0, 5, 25, -90, 120, 3, 27, 1};
	int	result;

	result = ft_negativo(vetor);
	printf("quantidade de números negativos = %i\n", result);


	printf("soma dos números positivo = %i\n", ft_positivo(vetor));
	return (0);
}
