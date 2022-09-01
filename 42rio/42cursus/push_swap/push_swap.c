/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:26:02 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/31 21:11:20 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	push_swap(int *nbr, int	count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		printf("nbr[%i] = %d\n", i, nbr[i]);
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int	*nbr;
	int	count;
	int	i;

	if (argc < 2)
		return (1);
	count = 0;
	while (argv[count])
		count++;
	nbr = ft_calloc((count - 1), sizeof(*nbr));
	i = 0;
	while (i < (count - 1))
	{
		nbr[i] = ft_atoi(argv[i + 1]);
		i++;
	}
	push_swap(nbr, (count - 1));
	return (0);
}
