/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hunger.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:30:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/29 23:40:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	*ft_hunger(void *data)
{
	t_rules			*rules;
	t_philo			**philos;
	unsigned int	i;

	rules = (t_rules *)data;
	philos = rules->philos;
	i = 0;
	while (1)
	{
		pthread_mutex_lock(&philos[i]->last_meal_mutex);
		if ((ft_get_time() - philos[i]->last_meal) > rules->ttd)
		{
			pthread_mutex_unlock(&philos[i]->last_meal_mutex);
			ft_msg(philos[i], "died\n");
			i = 0;
			while (i < rules->nop)
				philos[i++]->dead = 1;
			return (NULL);
		}
		pthread_mutex_unlock(&philos[i]->last_meal_mutex);
		if (i == rules->nop - 1)
			i = 0;
		else
			i++;
	}
}
