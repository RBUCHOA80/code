/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:17:24 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/22 22:38:54 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

void	*ft_routine(void *mutex)
{
	static int		count;
	int				i;

	i = 0;
	while (i < 10000)
	{
		pthread_mutex_lock(mutex);
		count++;
		pthread_mutex_unlock(mutex);
		i++;
	}
	return (&count);
}

int	philo(t_argv *rules)
{
	pthread_mutex_t	mutex;
	pthread_t		*pth;
	int				*count;
	int				i;

	printf("nop = %i \t <- number_of_philosophers\n", rules->nop);
	printf("ttd = %li \t <- time_to_die\n", rules->ttd);
	printf("tte = %li \t <- time_to_eat\n", rules->tte);
	printf("tts = %li \t <- time_to_sleep\n", rules->tts);
	if (rules->pme > 0)
		printf("pme = %i \t <- number_of_times_each_philosopher_must_eat\n", rules->pme);
	pthread_mutex_init(&mutex, NULL);
	pth = (pthread_t *)malloc(sizeof(*pth) * rules->nop);
	i = 0;
	while (i < rules->nop)
		pthread_create(pth + i++, NULL, &ft_routine, &mutex);
	i = 0;
	while (i < rules->nop)
		pthread_join(pth[i++], (void **)&count);
	pthread_mutex_destroy(&mutex);
	printf("\e[1;31mcount = %i\e[0m\n", *count);
	free(pth);
	ft_free_rule(rules);
	return (0);
}

/* 
timestamp_in_ms X has taken a fork
timestamp_in_ms X is eating
timestamp_in_ms X is sleeping
timestamp_in_ms X is thinking
timestamp_in_ms X died
 */

int	main(int argc, char **argv)
{
	if (ft_check_arg(argc, argv))
		return (1);
	return (philo(ft_create_rules(argv)));
}
