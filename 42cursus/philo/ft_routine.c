/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_routine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/02 21:32:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	ft_take(t_philo *philo)
{
	pthread_mutex_lock(philo->fork[0]);
	ft_msg(philo, "has taken a fork\n");
	pthread_mutex_lock(philo->fork[1]);
	ft_msg(philo, "has taken a fork\n");
	return (0);
}

int	ft_eat(t_philo *philo)
{
	ft_msg(philo, "is eating\n");
	philo->last_meal = ft_get_time();
	ft_sleep_ms(philo->rules, philo->rules->tte);
	pthread_mutex_unlock(philo->fork[0]);
	pthread_mutex_unlock(philo->fork[1]);
	philo->n_meals++;
	return (0);
}

int	ft_sleep(t_philo *philo)
{
	ft_msg(philo, "is sleeping\n");
	ft_sleep_ms(philo->rules, philo->rules->tts);
	return (0);
}

int	ft_think(t_philo *philo)
{
	ft_msg(philo, "is thinking\n");
	return (0);
}

void	*ft_routine(void *data)
{
	t_rules			*rules;
	t_philo			*philo;
	unsigned int	i;

	philo = (t_philo *)data;
	rules = philo->rules;
	i = 0;
	while (i++ < rules->pme && rules->dead == 0)
	{
		if (ft_take(philo))
			break ;
		ft_eat(philo);
		ft_sleep(philo);
		ft_think(philo);
	}
	return (NULL);
}
