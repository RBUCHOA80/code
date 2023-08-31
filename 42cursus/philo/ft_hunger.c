/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hunger.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:30:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/30 23:19:14 by ruchoa           ###   ########.fr       */
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
		pthread_mutex_lock(&rules->philos[i]->mutex);
		if ((ft_get_time() - rules->philos[i]->last_meal) > rules->ttd)
		{
			if (rules->philos[i]->n_meals < rules->pme)
			{
				pthread_mutex_unlock(&rules->philos[i]->mutex);
				ft_msg(rules->philos[i], "died\n");
				pthread_mutex_lock(&rules->philos[i]->mutex);
				rules->dead = 1;
				pthread_mutex_unlock(&rules->philos[i]->mutex);
				return (NULL);
			}
			pthread_mutex_unlock(&rules->philos[i]->mutex);
			if (i == rules->nop - 1)
				i = 0;
			else
				i++;
		}
		pthread_mutex_unlock(&rules->philos[i]->mutex);
	}
}
