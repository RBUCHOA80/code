/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:31:18 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/25 00:01:02 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

t_rules	*ft_create_rules(char **argv)
{
	t_rules	*rules;

	rules = malloc(sizeof(*rules));
	rules->nop = ft_atoi(argv[1]);
	rules->ttd = ft_atoi(argv[2]);
	rules->tte = ft_atoi(argv[3]);
	rules->tts = ft_atoi(argv[4]);
	if (argv[5])
		rules->pme = ft_atoi(argv[5]);
	else
		rules->pme = -1;
	return (rules);
}
