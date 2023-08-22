/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:17:24 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/21 23:57:36 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	routine(void)
{
	return (0);
}

	//pthread_create;
	//pthread_join;

int	philo(t_argv *rules)
{
	printf("number_of_philosophers = %i\n", rules->nop);
	printf("time_to_die = %li\n", rules->ttd);
	printf("time_to_eat = %li\n", rules->tte);
	printf("time_to_sleep = %li\n", rules->tts);
	if (rules->pme > 0)
		printf("number_of_times_each_philosopher_must_eat = %i\n", rules->pme);
	ft_free(rules);
	return (0);
}

/* 
timestamp_in_ms X has taken a fork
timestamp_in_ms X is eating
timestamp_in_ms X is sleeping
timestamp_in_ms X is thinking
timestamp_in_ms X died
 */

int	main(int argc, char **argv)
{
	if (ft_check_arg(argc, argv))
		return (1);
	return (philo(ft_create_rules(argv)));
}
