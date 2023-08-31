/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:05:20 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/27 09:17:19 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	ft_msg(t_philo *philo, char *str)
{
	int	ret;

	pthread_mutex_lock(&philo->mutex);
	if (philo->rules->dead)
	{
		pthread_mutex_unlock(&philo->mutex);
		return (-1);
	}
	ret = printf("%li %i %s", \
		(ft_get_time() - philo->rules->start_time), \
		philo->index, \
		str);
	pthread_mutex_unlock(&philo->mutex);
	return (ret);
}
