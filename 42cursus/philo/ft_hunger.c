/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hunger.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:30:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/02 19:38:16 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	*ft_hunger(void *data)
{
	t_rules			*rules;
	unsigned int	i;

	rules = (t_rules *)data;
	i = 0;
	while (rules->dead == 0)
	{
		if ((ft_get_time() - rules->philos[i]->last_meal) >= rules->ttd)
		{
			ft_msg(rules->philos[i], "\e[1;31mdied\e[m\n");
			rules->dead = 1;
			return (NULL);
		}
		if (i++ == (rules->nop - 1))
			i = 0;
	}
	return (NULL);
}
