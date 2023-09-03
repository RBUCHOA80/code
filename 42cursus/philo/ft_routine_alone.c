/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_routine_alone.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 20:42:42 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/02 21:32:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	*ft_routine_alone(void *data)
{
	t_rules	*rules;
	t_philo	*philo;

	philo = (t_philo *)data;
	rules = philo->rules;
	pthread_mutex_lock(philo->fork[0]);
	ft_msg(philo, "has taken a fork\n");
	ft_sleep_ms(rules, rules->ttd);
	ft_msg(philo, "died\n");
	philo->rules->dead = 1;
	pthread_mutex_unlock(philo->fork[0]);
	return (NULL);
}
