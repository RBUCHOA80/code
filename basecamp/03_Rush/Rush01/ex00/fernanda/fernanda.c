#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int count;

	count = 0;
	while(*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

int	*get_entry(char *border)
{
	int	start;
	int	stop;
	int	p;
	int	*entry_numbers;

	entry_numbers = malloc(16*sizeof(int));

	stop = ft_strlen(border);
	start = 0;
	p = 0;
	while (start < stop)
	{
		entry_numbers[p] = border[start];
		p++;
		start = start + 2;
	}
	return (entry_numbers);
}

int	ft_entry_size_validation(int n, char* entry)
{
	if (n != 2 || ft_strlen(entry) != 31)
	{
		write(1, "Error\n", 6);
		return (1);
	}
	else
		return (0);
}

int	**gen_p_solutions(void)
{
	int **row;

	row = malloc(4*sizeof(int*));
	row[0] = malloc(24*sizeof(int*));
	row[1] = malloc(24*sizeof(int*));
	row[2] = malloc(24*sizeof(int*));
	row[3] = malloc(24*sizeof(int*));

	return (row);
}

int	psolution_validation_left()
{
	int	test[] = {'1', '2', '3', '4'};
	int cond[] = {'4', '1'};
	int count;
	int	max;
	int	i;

	i = 1;
	count = '1';
	max = test[0];
	while (i <= 3)
	{
		if (test[i] > max)
		{
			max = test[i];
			count++;
		}
		i++;
	}
	if (count == cond[0])
		return (1);
	else
		return (0);
}

int	psolution_validation_right()
{
	int	test[] = {'1', '2', '3', '4'};
	int cond[] = {'4', '1'};
	int count;
	int	max;
	int	i;

	i = 1;
	count = '1';
	max = test[3];
	while (i <= 3)
	{
		if (test[i] > max)
		{
			max = test[i];
			count++;
		}
		i++;
	}
	if (count == cond[0])
		return (1);
	else
		return (0);
}

void	psolution_validation(int	**arranjos, int *entry_numbers)
{
	while
		if (psolution_validation_left)
			if (psolution_validation_right)
				p_solutions[r][c];
}

int	main()
{
	int	*entry_n;
	int **p_solutions;
	int	arranjos[24][4] = 
	{
		'1', '2', '3', '4',
		'1', '2', '4', '3',
		'1', '3', '2', '4',
		'1', '3', '4', '2',
		'1', '4', '2', '3',
		'1', '4', '3', '2',
		'2', '1', '3', '4',
		'2', '1', '4', '3',
		'2', '3', '1', '4',
		'2', '3', '4', '1',
		'2', '4', '1', '3',
		'2', '4', '3', '1',
		'3', '1', '2', '4',
		'3', '1', '4', '2',
		'3', '2', '1', '4',
		'3', '2', '4', '1',
		'3', '4', '1', '2',
		'3', '4', '2', '1',
		'4', '1', '2', '3',
		'4', '1', '3', '2',
		'4', '2', '1', '3',
		'4', '2', '3', '1',
		'4', '3', '1', '2',
		'4', '3', '2', '1',
	};

int a =0;

p_solutions = gen_p_solutions();

if (ft_entry_size_validation(argc, argv[1]))
	return (0);

entry_n = get_entry(argv[1]);

a = psolution_validation_right() + '0';
write(1, &a, 4);

p_solutions[0][0] = '1';
	write(1, &p_solutions[0][0], 4);

p_solutions[3][23] = '4';
	write(1, &p_solutions[3][23], 4);

// while(a <= 23)
// {
// 	write(1, arranjos[a], 4*sizeof(int));
// 	write(1, "\n", 1);
// 	a++
// }
	
}