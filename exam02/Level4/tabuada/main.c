#include <unistd.h>

int	ft_atoi(char *argv)
{
	int	ret;
	int	i;

	ret = 0;
	i = 0;
	while (argv[i])
	{
		ret = (ret * 10) + (argv[i] - 48);
		i++;
	}
	return (ret);
}

void	ft_itoa(int	nbr)
{
	char	str[10 + 1];
	int		i;

	str[10] = '\0';
	if (nbr == 0)
		write(1, "0", 1);
	else
	{
		i = 1;
		while(nbr)
		{
			str[10 - i] = 48 + (nbr % 10);
			nbr = nbr / 10;
			i++;
		}
		write(1, &str[10 + 1 - i], i);
	}
	return ;
}

void	tab_mult(int nbr)
{
	int	i;

	i = 1;
	while (i < 10)
	{
		ft_itoa(i);
		write(1, " x ", 4);
		ft_itoa(nbr);
		write(1, " = ", 3);
		ft_itoa(nbr * i);
		write(1, "\n", 1);
		i++;
	}
	return ;
}

int	main(int argc, char **argv)
{
	int	nbr;
	int	i;

	//Verificar se tem apenas 2 argumentos.
	if (argc != 2)
	{
		write(1, "(Erro A)", 8);
		write(1, "\n", 1);
		return (0);
	}

	//Verificar se no segundo argumento só tem simbolos numéricos.
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			write(1, "(Erro B)", 8);
			write(1, "\n", 1);
			return (0);
		}
		i++;
	}

	//Verificar se o segundo parâmetro cabe em um int
	if (ft_atoi(argv[1]) < 0 || ft_atoi(argv[1]) > 238609294)
	{
		write(1, "(Erro C)", 8);
		write(1, "\n", 1);
		return (0);
	}
	
	nbr = ft_atoi(argv[1]);
	tab_mult(nbr);
	return (0);
}

//       1   2   3   4   5   6   7   8   9   10  11
//str = [0] [1] [2] [3] [4] [5] [6] [7] [8] [9] [10]
//                                   1   0   0  '\0'
//INT_MAX = 2147483647
//INT_MAX / 9 = 238609294