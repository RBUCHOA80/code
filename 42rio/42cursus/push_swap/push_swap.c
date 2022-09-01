/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:26:02 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/31 23:15:35 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int *nbr, int	count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		ft_printf("nbr[%i] = %d\n", i, nbr[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	*nbr;
	int	i;

	if (argc < 2)
		return (1);
	argc -= 1;
	nbr = ft_calloc(argc, sizeof(*nbr));
	i = 0;
	while (i < argc)
	{
		nbr[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	push_swap(nbr, argc);
	return (0);
}
