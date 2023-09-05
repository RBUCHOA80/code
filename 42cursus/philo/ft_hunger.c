/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hunger.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:30:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/04 20:49:29 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	*ft_hunger(void *data)
{
	t_rules			*rules;
	t_philo			**philos;
	unsigned int	i;
	unsigned int	j;

	rules = (t_rules *)data;
	philos = rules->philos;
	j = 0;
	i = 0;
	while (1)
	{
		if (ft_check_last_meal(philos[i]))
		{
			ft_msg(rules->philos[i], "died\n");
			ft_set_dead(philos);
			return (NULL);
		}
		if (ft_check_meals(philos[i]))
			j++;
		if (j >= rules->nop)
			break ;
		if (i++ == (rules->nop - 1))
		{
			i = 0;
			j = 0;
		}
	}
	return (NULL);
}
