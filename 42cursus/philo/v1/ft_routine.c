/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_routine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/05 08:02:37 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	ft_take(t_philo *philo)
{
	pthread_mutex_lock(philo->fork[0]);
	ft_msg(philo, "has taken a fork\n");
	pthread_mutex_lock(philo->fork[1]);
	ft_msg(philo, "has taken a fork\n");
}

void	ft_eat(t_philo *philo)
{
	t_rules	*rules;
	time_t	to_eat;

	rules = philo->rules;
	to_eat = (rules->tte);
	ft_msg(philo, "is eating\n");
	ft_sleep_ms(philo, to_eat);
	pthread_mutex_unlock(philo->fork[0]);
	pthread_mutex_unlock(philo->fork[1]);
}

void	ft_sleep(t_philo *philo)
{
	t_rules	*rules;
	time_t	to_sleep;

	rules = philo->rules;
	to_sleep = (rules->tts);
	ft_msg(philo, "is sleeping\n");
	ft_sleep_ms(philo, to_sleep);
}

void	ft_think(t_philo *philo)
{
	t_rules	*rules;
	time_t	to_think;

	rules = philo->rules;
	to_think = ((rules->ttd - rules->tte - rules->tts) / rules->nop);
	ft_msg(philo, "is thinking\n");
	ft_sleep_ms(philo, to_think);
}

void	*ft_routine(void *data)
{
	t_rules	*rules;
	t_philo	*philo;
	int		i;

	philo = (t_philo *)data;
	rules = philo->rules;
	i = 0;
	while (i != rules->pme)
	{
		ft_take(philo);
		ft_eat(philo);
		ft_sleep(philo);
		ft_think(philo);
		i++;
	}
	i = 0;
	while (i++ < 1000)
	{
		pthread_mutex_lock(&rules->test_mutex);
		rules->test_count++;
		pthread_mutex_unlock(&rules->test_mutex);
	}
	return (0);
}
