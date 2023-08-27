/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_routine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/27 11:12:42 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	*ft_routine(void *data)
{
	t_philo			*philo;
	t_rules			*rules;
	unsigned int	i;

	philo = (t_philo *)data;
	rules = philo->rules;
	pthread_mutex_lock(rules->forks[0]);
	//pthread_mutex_lock(rules->forks[0]);
	ft_write(philo, "has taken a fork\n");
	ft_write(philo, "is eating\n");
	usleep(rules->tte);
	i = 0;
	while (i++ < 10000)
	{
		rules->test_count++;
	}
	pthread_mutex_unlock(rules->forks[0]);
	ft_write(philo, "is sleeping\n");
	usleep(rules->tts);
	ft_write(philo, "is thinking\n");
	ft_write(philo, "died\n");
	return (0);
}
