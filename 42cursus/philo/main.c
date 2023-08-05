/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 22:31:53 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/04 23:53:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

/* 
number_of_philosophers
time_to_die
time_to_eat
time_to_sleep
[number_of_times_each_philosopher_must_eat]
 */

/* 
timestamp_in_ms X has taken a fork
timestamp_in_ms X is eating
timestamp_in_ms X is sleeping
timestamp_in_ms X is thinking
timestamp_in_ms X died
 */

int	ft_check_arg(char **argv)
{
	int	i;

	i = 0;
	while (argv[++i] != NULL)
	{
		if (ft_strcmp(ft_itoa(ft_atoi(argv[i])), argv[i]))
			return (1);
		printf("argv[%i] = %s\n", i, argv[i]);
	}
	return (0);
}

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
	return (0);
}
