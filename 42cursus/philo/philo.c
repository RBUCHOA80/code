/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:17:24 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/26 23:48:18 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

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
