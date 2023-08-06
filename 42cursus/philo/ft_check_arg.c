/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:31:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/05 21:31:42 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	ft_check_arg(char **argv)
{
	int	i;

	i = 0;
	while (argv[++i] != NULL)
	{
		if (ft_strcmp(ft_itoa(ft_atoi(argv[i])), argv[i]))
			return (1);
		printf("argv[%i] = %s\n", i, argv[i]);
	}
	return (0);
}
