/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:17:24 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/29 22:25:37 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	philo(t_rules *rules)
{
	pthread_t		hunger;
	unsigned int	i;

	pthread_mutex_init(rules->forks[0], NULL);
	pthread_mutex_init(rules->forks[1], NULL);
	i = 0;
	while (i < rules->nop)
	{
		pthread_create(&rules->philos[i]->thread, NULL, \
			&ft_routine, rules->philos[i]);
		i++;
	}
	pthread_create(&hunger, NULL, &ft_hunger, rules);
	i = 0;
	while (i < rules->nop)
		pthread_join(rules->philos[i++]->thread, NULL);
	pthread_join(hunger, NULL);
	pthread_mutex_destroy(rules->forks[0]);
	pthread_mutex_destroy(rules->forks[1]);
	return (0);
}
