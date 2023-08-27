/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:11 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/27 11:20:48 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	main(int argc, char **argv)
{
	t_rules	*rules;

	if (ft_check_arg(argc, argv))
		return (1);
	rules = ft_init(argv);
	printf("nop = %i \t<- number_of_philosophers\n", rules->nop);
	printf("ttd = %li\t<- time_to_die\n", rules->ttd);
	printf("tte = %li\t<- time_to_eat\n", rules->tte);
	printf("tts = %li\t<- time_to_sleep\n", rules->tts);
	if (rules->pme > 0)
		printf("pme = %i \t<- number_of_times_each_philosopher_must_eat\n", \
			rules->pme);
	philo(rules);
	printf("\e[1;31m%i test_count = %i\e[0m\n", (ft_get_time()-rules->start_time), rules->test_count);
	return (0);
}
