/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_meals.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 08:53:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/03 15:30:55 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	ft_set_meals(t_philo *philo)
{
	pthread_mutex_lock(&philo->m_meals);
	philo->meals++;
	pthread_mutex_unlock(&philo->m_meals);
	return (0);
}
