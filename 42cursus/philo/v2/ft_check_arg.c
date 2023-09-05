/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_arg.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 21:31:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/02 18:48:54 by ruchoa           ###   ########.fr       */
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
		{
			if (ft_strcmp(ft_itoa(ft_atoi(argv[i])), argv[i]))
				return (ft_error_msg());
			if (ft_atoi(argv[i]) <= 0)
				return (ft_error_msg());
		}
		return (0);
	}
	return (ft_error_msg());
}
