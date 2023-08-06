#include "./philo.h"

t_argv	*ft_create_rules(char **argv)
{
	t_argv	*ret;

	ret->number_of_philosophers = ft_atoi(argv[1]);
	ret->time_to_die = argv[2];
	ret->time_to_eat = argv[3];
	ret->time_to_sleep = argv[4];
	ret->number_of_times_each_philosopher_must_eat = argv[5];

	return (ret);
}