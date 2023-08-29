/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hunger.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:30:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/28 20:54:40 by ruchoa           ###   ########.fr       */
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
		if ((ft_get_time() - philos[i]->last_meal) >= rules->ttd)
		{
			ft_msg(philos[i], "\e[1;32mdied\e[m\n");
			i = 0;
			while (i < rules->nop)
				philos[i++]->dead = 1;
			return (NULL);
		}
		if (i == rules->nop - 1)
			i = 0;
		else
			i++;
	}
	return (NULL);
}
