/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_routine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/27 17:54:30 by ruchoa           ###   ########.fr       */
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
	if (philo->last_meal >= rules->ttd)
		ft_write(philo, "\e[1;32mdied\e[m\n");
	ft_write(philo, "has taken a fork\n");
	ft_write(philo, "is eating\n");
	usleep(philo->rules->tte * 1000);
	pthread_mutex_unlock(philo->fork[0]);
	pthread_mutex_unlock(philo->fork[1]);
	philo->last_meal = (ft_get_time() - rules->start_time) - philo->last_meal;
	ft_write(philo, "is sleeping\n");
	usleep(philo->rules->tts * 1000);
	ft_write(philo, "is thinking\n");
	i = 0;
	while (i++ < 1000)
	{
		pthread_mutex_lock(&rules->test_mutex);
		rules->test_count++;
		pthread_mutex_unlock(&rules->test_mutex);
	}
	printf("philo[%i]->last_meal = %li\n", philo->index, philo->last_meal);
}

void	*ft_routine(void *data)
{
	t_rules			*rules;
	t_philo			*philo;
	unsigned int	i;

	philo = (t_philo *)data;
	rules = philo->rules;
	i = 0;
	while (i++ < rules->pme)
	{
		ft_take_eat_sleep(philo);
	}
	return (0);
}
