/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:17:24 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/02 20:58:42 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	philo(t_rules *rules)
{
	pthread_t		hunger;
	unsigned int	i;

	if (rules->nop == 1)
	{
		pthread_create(&rules->philos[0]->thread, NULL, \
			&ft_routine_alone, rules->philos[0]);
		pthread_join(rules->philos[0]->thread, NULL);
	}
	else
	{
		i = 0;
		while (i < rules->nop)
		{
			pthread_create(&rules->philos[i]->thread, NULL, \
				&ft_routine, rules->philos[i]);
			i++;
		}
		pthread_create(&hunger, NULL, &ft_hunger, rules);
		i = 0;
		while (i < rules->nop)
			pthread_join(rules->philos[i++]->thread, NULL);
		pthread_join(hunger, NULL);
	}
	return (0);
}
