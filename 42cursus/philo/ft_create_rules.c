/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_rules.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:31:18 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/26 18:45:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

t_rules	*ft_create_rules(char **argv)
{
	t_rules			*rules;
	unsigned int	i;

	rules = malloc(sizeof(t_rules));
	rules->nop = ft_atoi(argv[1]);
	rules->ttd = ft_atoi(argv[2]);
	rules->tte = ft_atoi(argv[3]);
	rules->tts = ft_atoi(argv[4]);
	rules->start_time = ft_get_time();
	if (argv[5])
		rules->pme = ft_atoi(argv[5]);
	else
		rules->pme = -1;
	rules->philos = malloc(sizeof(t_philo *) * rules->nop);
	i = 0;
	while (i < rules->nop)
	{
		rules->philos[i] = malloc(sizeof(t_philo));
		rules->philos[i]->rules = rules;
		rules->philos[i]->id = i + 1;
		i++;
	}
	return (rules);
}
