/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:31:18 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/03 18:29:04 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	ft_init_rules(t_rules *rules, char **argv)
{
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
}

void	ft_init_forks(t_rules *rules)
{
	unsigned int	i;

	rules->forks = malloc(sizeof(pthread_mutex_t) * rules->nop);
	i = 0;
	while (i < rules->nop)
	{
		rules->forks[i] = malloc(sizeof(pthread_mutex_t));
		pthread_mutex_init(rules->forks[i], NULL);
		i++;
	}
}

void	ft_init_philos_forks(t_rules *rules, unsigned int i)
{
	if (i == 0)
	{
		rules->philos[i]->fork[0] = rules->forks[i];
		rules->philos[i]->fork[1] = rules->forks[rules->nop - 1];
	}
	else if (i % 2 != 0)
	{
		rules->philos[i]->fork[0] = rules->forks[i - 1];
		rules->philos[i]->fork[1] = rules->forks[i];
	}
	else if (i % 2 == 0)
	{
		rules->philos[i]->fork[0] = rules->forks[i];
		rules->philos[i]->fork[1] = rules->forks[i - 1];
	}
}

void	ft_init_philos(t_rules *rules)
{
	static unsigned int	i = -1;

	while (++i < rules->nop)
	{
		rules->philos[i] = malloc(sizeof(t_philo));
		rules->philos[i]->index = i + 1;
		ft_init_philos_forks(rules, i);
		pthread_mutex_init(&rules->philos[i]->m_last_meal, NULL);
		rules->philos[i]->last_meal = ft_get_time();
		pthread_mutex_init(&rules->philos[i]->m_meals, NULL);
		rules->philos[i]->meals = 0;
		pthread_mutex_init(&rules->philos[i]->m_dead, NULL);
		rules->philos[i]->dead = 0;
		rules->philos[i]->rules = rules;
	}
}

t_rules	*ft_init(char **argv)
{
	t_rules			*rules;

	rules = malloc(sizeof(t_rules));
	ft_init_rules(rules, argv);
	ft_init_forks(rules);
	ft_init_philos(rules);
	return (rules);
}
