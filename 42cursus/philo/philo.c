/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:17:24 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/25 23:11:15 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	*ft_routine(void *data)
{
	static int		count;
	t_rules			*rules;
	t_philo			*philo;
	unsigned int	i;

	philo = (t_philo *)data;
	rules = philo->rules;
	printf("timestamp_in_ms %i has taken a fork\n", philo->id);
	printf("timestamp_in_ms %i is eating\n", philo->id);
	printf("timestamp_in_ms %i is sleeping\n", philo->id);
	printf("timestamp_in_ms %i is thinking\n", philo->id);
	printf("timestamp_in_ms %i died\n", philo->id);
	i = 0;
	while (i++ < 10000)
	{
		pthread_mutex_lock(&rules->mutex);
		count++;
		pthread_mutex_unlock(&rules->mutex);
	}
	printf("\e[1;31m%p count = %i\e[0m\n", &count, count);
	return (0);
}

int	philo(t_rules *rules)
{
	unsigned int	i;

	printf("nop = %i \t<- number_of_philosophers\n", rules->nop);
	printf("ttd = %li\t<- time_to_die\n", rules->ttd);
	printf("tte = %li\t<- time_to_eat\n", rules->tte);
	printf("tts = %li\t<- time_to_sleep\n", rules->tts);
	if (rules->pme > 0)
		printf("pme = %i \t<- number_of_times_each_philosopher_must_eat\n", \
			rules->pme);
	pthread_mutex_init(&rules->mutex, NULL);
	i = 0;
	while (i < rules->nop)
	{
		pthread_create(&rules->philos[i]->thread, NULL, \
			&ft_routine, rules->philos[i]);
		i++;
	}
	i = 0;
	while (i < rules->nop)
		pthread_join(rules->philos[i++]->thread, NULL);
	pthread_mutex_destroy(&rules->mutex);
	ft_free_rule(rules);
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
	t_rules	*rules;

	if (ft_check_arg(argc, argv))
		return (1);
	rules = ft_create_rules(argv);
	philo(rules);
	return (0);
}
