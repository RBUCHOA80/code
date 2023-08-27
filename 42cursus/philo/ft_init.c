/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:31:18 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/27 08:17:54 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	ft_init_rules(t_rules *rules, char **argv)
{
	rules->nop = ft_atoi(argv[1]);
	rules->ttd = ft_atoi(argv[2]);
	rules->tte = ft_atoi(argv[3]);
	rules->tts = ft_atoi(argv[4]);
	rules->time = ft_get_time();
	if (argv[5])
		rules->pme = ft_atoi(argv[5]);
	else
		rules->pme = -1;
}

void	ft_init_philos(t_rules *rules)
{
	unsigned int	i;

	rules->philos = malloc(sizeof(t_philo *) * rules->nop);
	i = 0;
	while (i < rules->nop)
	{
		rules->philos[i] = malloc(sizeof(t_philo));
		rules->philos[i]->rules = rules;
		rules->philos[i]->id = i + 1;
		i++;
	}
}

void	ft_init_forks(t_rules *rules)
{
	unsigned int	i;

	rules->forks = malloc(sizeof(pthread_mutex_t *) * rules->nop);
	i = 0;
	while (i < rules->nop)
	{
		rules->forks[i] = malloc(sizeof(pthread_mutex_t));
		i++;
	}
}

t_rules	*ft_init(char **argv)
{
	t_rules			*rules;

	rules = malloc(sizeof(t_rules));
	ft_init_rules(rules, argv);
	ft_init_philos(rules);
	ft_init_forks(rules);
	return (rules);
}
