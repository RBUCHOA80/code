/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_routine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/27 09:07:52 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	*ft_routine(void *data)
{
	static int		count;
	t_philo			*philo;
	t_rules			*rules;
	unsigned int	i;

	philo = (t_philo *)data;
	rules = philo->rules;
		pthread_mutex_lock(rules->forks[0]);
	printf("%li %i has taken a fork\n", (ft_get_time() - rules->start_time), philo->index);
	sleep(2);
		pthread_mutex_unlock(rules->forks[0]);
	printf("%li %i is eating\n", (ft_get_time() - rules->start_time), philo->index);
	printf("%li %i is sleeping\n", (ft_get_time() - rules->start_time), philo->index);
	printf("%li %i is thinking\n", (ft_get_time() - rules->start_time), philo->index);
	printf("%li %i died\n", (ft_get_time() - rules->start_time), philo->index);
	i = 0;
	while (i++ < 10000)
	{
		pthread_mutex_lock(rules->forks[0]);
		count++;
		pthread_mutex_unlock(rules->forks[0]);
	}
	printf("\e[1;31m%p %i count = %i\e[0m\n", &count, philo->index, count);
	return (0);
}
