/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_routine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/29 23:48:31 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	ft_take_eat_sleep_think(t_philo *philo)
{
	pthread_mutex_lock(philo->fork[0]);
	ft_msg(philo, "has taken a fork\n");
	pthread_mutex_lock(philo->fork[1]);
	ft_msg(philo, "has taken a fork\n");
	ft_msg(philo, "is eating\n");
	pthread_mutex_lock(&philo->last_meal_mutex);
	philo->last_meal = ft_get_time();
	pthread_mutex_unlock(&philo->last_meal_mutex);
	usleep(philo->rules->tte * 1000);
	pthread_mutex_lock(&philo->last_meal_mutex);
	philo->last_meal = ft_get_time();
	pthread_mutex_unlock(&philo->last_meal_mutex);
	pthread_mutex_unlock(philo->fork[0]);
	pthread_mutex_unlock(philo->fork[1]);
	ft_msg(philo, "is sleeping\n");
	usleep(philo->rules->tts * 1000);
	ft_msg(philo, "is thinking\n");
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
		ft_take_eat_sleep_think(philo);
	return (0);
}