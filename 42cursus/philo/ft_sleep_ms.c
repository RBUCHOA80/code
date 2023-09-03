/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sleep_ms.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 19:48:23 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/02 22:16:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	ft_sleep_ms(t_philo *philo, unsigned int usec)
{
	unsigned int	i;

	i = 0;
	while (i++ < (usec / 100) && philo->dead == 0)
		usleep(100 * 1000);
	usleep((usec % 100) * 1000);
}
