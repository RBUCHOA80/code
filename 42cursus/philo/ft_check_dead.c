/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_dead.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:35:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/03 15:44:03 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	ft_check_dead(t_philo *philo)
{
	int	ret;

	pthread_mutex_lock(&philo->m_dead);
	ret = philo->dead;
	pthread_mutex_unlock(&philo->m_dead);
	return (ret);
}
