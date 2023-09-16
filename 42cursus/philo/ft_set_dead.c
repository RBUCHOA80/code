/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_set_dead.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 21:35:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/03 14:15:45 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	ft_set_dead(t_philo **philos)
{
	t_rules			*rules;
	unsigned int	i;

	rules = (*philos)->rules;
	i = 0;
	while (i < rules->nop)
	{
		pthread_mutex_lock(&philos[i]->m_dead);
		philos[i]->dead = 1;
		pthread_mutex_unlock(&philos[i]->m_dead);
		i++;
	}
	return ;
}
