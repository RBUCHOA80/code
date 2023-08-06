#include "./philo.h"

/* 
timestamp_in_ms X has taken a fork
timestamp_in_ms X is eating
timestamp_in_ms X is sleeping
timestamp_in_ms X is thinking
timestamp_in_ms X died
 */

int	main(int argc, char **argv)
{
	if (argc != 5 && argc != 6)
	{
		ft_msg();
		return (1);
	}
	if (ft_check_arg(argv))
	{
		ft_msg();
		return (1);
	}
	ft_create_rules(argv);
	ft_philo(argv);
	return (0);
}
