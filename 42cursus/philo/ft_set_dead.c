/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_dead.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:35:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/02 22:20:40 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	ft_set_dead(t_philo *philo)
{
	pthread_mutex_lock(&philo->m_dead);
	philo->dead = 1;
	pthread_mutex_unlock(&philo->m_dead);
	return ;
}
