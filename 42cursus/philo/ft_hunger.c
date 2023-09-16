/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hunger.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 19:30:26 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/15 22:34:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	*ft_hunger(void *data)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (1)
	{
		if (ft_check_last_meal(((t_rules *)data)->philos[i]))
		{
			ft_msg(((t_rules *)data)->philos[i], "died\n");
			ft_set_dead(((t_rules *)data)->philos);
			return (NULL);
		}
		if (ft_check_meals(((t_rules *)data)->philos[i]))
			j++;
		if (j >= ((t_rules *)data)->nop)
			break ;
		if (i++ == (((t_rules *)data)->nop - 1))
		{
			i = 0;
			j = 0;
		}
		usleep(10);
	}
	return (NULL);
}
