/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 11:43:11 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/29 22:41:39 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	main(int argc, char **argv)
{
	t_rules	*rules;

	if (ft_check_arg(argc, argv))
		return (1);
	rules = ft_init(argv);
	philo(rules);
	ft_free(rules);
	return (0);
}
