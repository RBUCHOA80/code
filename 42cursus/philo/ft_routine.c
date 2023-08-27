/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_routine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/27 12:40:59 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	ft_take_eat_sleep(t_philo *philo)
{
	unsigned int	i;
	t_rules			*rules;

	rules = philo->rules;
	pthread_mutex_lock(philo->fork[0]);
	ft_write(philo, "has taken a fork\n");
	pthread_mutex_lock(philo->fork[1]);
	ft_write(philo, "has taken a fork\n");
	ft_write(philo, "is eating\n");
	usleep(philo->rules->tte);
	i = 0;
	while (i++ < 10000)
	{
		pthread_mutex_lock(&rules->test_mutex);
		rules->test_count++;
		pthread_mutex_unlock(&rules->test_mutex);
	}
	pthread_mutex_unlock(philo->fork[0]);
	pthread_mutex_unlock(philo->fork[1]);
}

void	*ft_routine(void *data)
{
	t_philo			*philo;
	t_rules			*rules;

	philo = (t_philo *)data;
	rules = philo->rules;
	ft_take_eat_sleep(philo);
	ft_write(philo, "is sleeping\n");
	usleep(rules->tts);
	ft_write(philo, "is thinking\n");
	ft_write(philo, "died\n");
	return (0);
}
