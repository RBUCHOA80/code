/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_routine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/03 18:46:11 by ruchoa           ###   ########.fr       */
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

int	ft_sleep(t_philo *philo)
{
	t_rules	*rules;
	time_t	to_sleep;

	rules = philo->rules;
	to_sleep = (rules->tts);
	ft_msg(philo, "is sleeping\n");
	ft_sleep_ms(philo, to_sleep);
	return (0);
}

int	ft_think(t_philo *philo)
{
	t_rules	*rules;
	time_t	to_think;

	rules = philo->rules;
	to_think = ((rules->ttd - rules->tte - rules->tts) / rules->nop);
	ft_msg(philo, "is thinking\n");
	ft_sleep_ms(philo, to_think);
	return (0);
}

void	*ft_routine(void *data)
{
	t_rules	*rules;
	t_philo	*philo;
	int		i;

	philo = (t_philo *)data;
	rules = philo->rules;
	i = 0;
	while (i != rules->pme && ft_check_dead(philo) == 0)
	{
		ft_take(philo);
		ft_eat(philo);
		ft_sleep(philo);
		ft_think(philo);
		i++;
	}
	return (NULL);
}
