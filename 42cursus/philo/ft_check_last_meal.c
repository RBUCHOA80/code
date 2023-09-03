/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_last_meal.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 08:53:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/03 15:14:19 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	ft_check_last_meal(t_philo *philo)
{
	pthread_mutex_lock(&philo->m_last_meal);
	if ((ft_get_time() - philo->last_meal) >= philo->rules->ttd)
	{
		pthread_mutex_unlock(&philo->m_last_meal);
		return (1);
	}
	else
	{
		pthread_mutex_unlock(&philo->m_last_meal);
		return (0);
	}
}
