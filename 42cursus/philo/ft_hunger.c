/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hunger.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:30:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/31 21:45:25 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	*ft_hunger(void *data)
{
	t_rules			*rules;
	unsigned int	i;

	rules = (t_rules *)data;
	i = 0;
	while (1)
	{
		pthread_mutex_lock(&rules->philos[i]->m_last_meal);
		if ((ft_get_time() - rules->philos[i]->last_meal) >= rules->ttd)
		{
			pthread_mutex_unlock(&rules->philos[i]->m_last_meal);
			pthread_mutex_lock(&rules->m_dead);
			rules->dead = 1;
			pthread_mutex_unlock(&rules->m_dead);
			ft_msg(rules->philos[i], "died\n");
			return (NULL);
		}
		pthread_mutex_unlock(&rules->philos[i]->m_last_meal);
		if (i++ == (rules->nop - 1))
			i = 0;
	}
}
