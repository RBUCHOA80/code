/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_meals.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 08:53:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/03 15:38:50 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	ft_check_meals(t_philo *philo)
{
	t_rules	*rules;

	rules = philo->rules;
	pthread_mutex_lock(&philo->m_meals);
	if (philo->meals <= rules->pme)
	{
		pthread_mutex_unlock(&philo->m_meals);
		return (1);
	}
	else
	{
		pthread_mutex_unlock(&philo->m_meals);
		return (0);
	}
}
