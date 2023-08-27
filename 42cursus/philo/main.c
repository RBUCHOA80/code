/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:11 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/27 11:24:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	main(int argc, char **argv)
{
	t_rules	*rules;

	if (ft_check_arg(argc, argv))
		return (1);
	rules = ft_init(argv);
	printf("\e[1;33mnop = %i \t<- number_of_philosophers\e[0m\n", rules->nop);
	printf("\e[1;33mttd = %li\t<- time_to_die\e[0m\n", rules->ttd);
	printf("\e[1;33mtte = %li\t<- time_to_eat\e[0m\n", rules->tte);
	printf("\e[1;33mtts = %li\t<- time_to_sleep\e[0m\n", rules->tts);
	if (rules->pme > 0)
		printf("pme = %i \t<- number_of_times_each_philosopher_must_eat\e[0m\n", \
			rules->pme);
	philo(rules);
	printf("\e[1;31m%li test_count = %i\e[0m\n", \
		(ft_get_time()-rules->start_time), rules->test_count);
	return (0);
}
