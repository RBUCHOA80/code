/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:31:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/21 23:29:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./philo.h"

int	ft_check_arg(int argc, char **argv)
{
	int	i;

	if (argc == 5 || argc == 6)
	{
		i = 0;
		while (argv[++i] != NULL)
			if (ft_strcmp(ft_itoa(ft_atoi(argv[i])), argv[i]))
				return (1);
		return (0);
	}
	ft_msg();
	return (1);
}
