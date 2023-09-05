/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 23:46:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/03 14:29:08 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	ft_free_philos(t_rules *rules)
{
	t_philo			**philos;
	unsigned int	i;

	philos = rules->philos;
	i = rules->nop;
	while (i--)
	{
		pthread_mutex_destroy(&philos[i]->m_dead);
		pthread_mutex_destroy(&philos[i]->m_meals);
		pthread_mutex_destroy(&philos[i]->m_last_meal);
		free(philos[i]);
	}
	free(rules->philos);
	return (0);
}

int	ft_free_forks(t_rules *rules)
{
	unsigned int	i;

	i = rules->nop;
	while (i--)
	{
		pthread_mutex_destroy(rules->forks[i]);
		free(rules->forks[i]);
	}
	free(rules->forks);
	return (0);
}

int	ft_free(t_rules *rules)
{
	ft_free_philos(rules);
	ft_free_forks(rules);
	free(rules);
	return (0);
}
