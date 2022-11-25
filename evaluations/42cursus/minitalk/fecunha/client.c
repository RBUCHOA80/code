#include <stdio.h>
#include <unistd.h>
#include <signal.h>

int	ft_atoi(const char *str)
{
	size_t	index;
	size_t	number;
	size_t	signal;

	index = 0;
	number = 0;
	signal = 1;
	while ((str[index] == ' ') || (str[index] >= 9 && str[index] <= 13))
		index++;
	if ((str[index] == '-') || (str[index] == '+'))
	{
		if (str[index] == '-')
			signal *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		number = number * 10 + (str[index] - '0');
		index++;
	}
	return (number * signal);
}

void	handler_send(char *message, int number_pid)
{
	int	index;
	int	count_bits;

	index = 0;
	count_bits = 0;
	while (message[index])
	{
		while (count_bits < 8)
		{
			if (message[index] & 128 >> count_bits)
				kill(number_pid, SIGUSR1);
			else
				kill(number_pid, SIGUSR2);
			usleep(200);
			count_bits++;
		}
		count_bits = 0;
		index++;
	}
}

int	main(int argc, char **argv)
{
	int	number_pid;

	if(argc != 3)
		return 0;
	number_pid = ft_atoi(argv[1]);
	handler_send(argv[2], number_pid);
	return (0);
}
