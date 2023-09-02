/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_usleep.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/01 19:48:23 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/02 20:13:06 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	ft_usleep(t_rules *rules, unsigned int usec)
{
	unsigned int	nbr;
	unsigned int	i;

	nbr = 100;
	i = 0;
	while (i++ < (usec / nbr) && rules->dead == 0)
		usleep(nbr * 1000);
	usleep((usec * 1000) % nbr);
}
