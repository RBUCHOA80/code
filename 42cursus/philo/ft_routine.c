/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_routine.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:54 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/26 11:44:06 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	*ft_routine(void *data)
{
	static int		count;
	t_rules			*rules;
	t_philo			*philo;
	unsigned int	i;

	philo = (t_philo *)data;
	rules = philo->rules;
	printf("%li %i has taken a fork\n", (ft_get_time() - rules->start_time), philo->id);
	printf("%li %i is eating\n", (ft_get_time() - rules->start_time), philo->id);
	printf("%li %i is sleeping\n", (ft_get_time() - rules->start_time), philo->id);
	printf("%li %i is thinking\n", (ft_get_time() - rules->start_time), philo->id);
	printf("%li %i died\n", (ft_get_time() - rules->start_time), philo->id);
	i = 0;
	while (i++ < 100000)
	{
		pthread_mutex_lock(&rules->mutex);
		count++;
		pthread_mutex_unlock(&rules->mutex);
	}
	printf("\e[1;31m%p %i count = %i\e[0m\n", &count, philo->id, count);
	return (0);
}
