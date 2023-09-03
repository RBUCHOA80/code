/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 22:23:56 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/02 22:24:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	ft_eat(t_philo *philo)
{
	ft_msg(philo, "is eating\n");
	philo->last_meal = ft_get_time();
	ft_sleep_ms(philo, philo->rules->tte);
	pthread_mutex_unlock(philo->fork[0]);
	pthread_mutex_unlock(philo->fork[1]);
	philo->meals++;
	return (0);
}
