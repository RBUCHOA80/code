/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msg.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 09:05:20 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/16 00:07:47 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	ft_msg(t_philo *philo, char *str)
{
	t_rules	*rules;
	int		ret;

	rules = philo->rules;
	if (ft_check_dead(philo))
		return (-1);
	pthread_mutex_lock(&rules->m_printf);
	ret = printf("%li %i %s", \
			(ft_get_time() - rules->start_time), \
			philo->index, \
			str);
	pthread_mutex_unlock(&rules->m_printf);
	return (ret);
}
