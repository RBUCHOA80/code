/*
- faça um programa 
- que preencha um vetor coom 10 números reias. 

Em seguida, calcule e mostre na tela a 
- quantidade de números negativos e a 
- soma dos números positivo desse vetor.
*/

/*
1 - int
2 - char
3 - void
*/

//tipo nome(tipo entrada) negativo
//return (saída)
int	ft_negativo(int* vetor)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while(i < 10)
	{
		if(vetor[i] < 0)
		{
			count++;
		}
		i++;
	}
	return (count);
}

//tipo nome(entrada) positivo
//return (saída)
int	ft_positivo(int* vetor)
{
	int	soma;
	int	i;

	soma = 0;
	i = 0;
	while(i < 10)
	{
		if(vetor[i] > 0)
		{
			soma = soma + vetor[i];
		}
		i++;
	}
	return (soma);
}
