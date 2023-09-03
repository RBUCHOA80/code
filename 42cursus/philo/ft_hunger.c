/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hunger.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:30:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/03 15:33:30 by ruchoa           ###   ########.fr       */
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
		if (ft_check_last_meal(philos[i]) && ft_check_meals(philos[i]))
		{
			ft_msg(rules->philos[i], "\e[1;31mdied\e[m\n");
			ft_set_dead(philos);
			return (NULL);
		}
		if (i++ == (rules->nop - 1))
			i = 0;
	}
	return (NULL);
}
