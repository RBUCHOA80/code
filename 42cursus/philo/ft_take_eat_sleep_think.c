/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_eat_sleep_think.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/31 21:31:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	ft_take_eat_sleep_think(t_philo *philo)
{
	pthread_mutex_lock(philo->fork[0]);
	pthread_mutex_lock(&philo->rules->r_mutex);
	if (!philo->rules->dead)
		ft_msg(philo, "has taken a fork\n");
	pthread_mutex_unlock(&philo->rules->r_mutex);
	pthread_mutex_lock(philo->fork[1]);
	pthread_mutex_lock(&philo->rules->r_mutex);
	if (!philo->rules->dead)
		ft_msg(philo, "has taken a fork\n");
	if (!philo->rules->dead)
		ft_msg(philo, "is eating\n");
	pthread_mutex_lock(&philo->p_mutex);
	philo->last_meal = ft_get_time();
	pthread_mutex_unlock(&philo->p_mutex);
	pthread_mutex_unlock(&philo->rules->r_mutex);
	usleep(philo->rules->tte * 1000);
	pthread_mutex_unlock(philo->fork[0]);
	pthread_mutex_unlock(philo->fork[1]);
	philo->n_meals++;
	pthread_mutex_lock(&philo->rules->r_mutex);
	if (!philo->rules->dead)
		ft_msg(philo, "is sleeping\n");
	pthread_mutex_unlock(&philo->rules->r_mutex);
	usleep(philo->rules->tts * 1000);
	pthread_mutex_lock(&philo->rules->r_mutex);
	if (!philo->rules->dead)
		ft_msg(philo, "is thinking\n");
	pthread_mutex_unlock(&philo->rules->r_mutex);
}
