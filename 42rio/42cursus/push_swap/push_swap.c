/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:26:02 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/01 20:30:08 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_arr(int *nbr, int	count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		ft_printf("nbr[%i] = %d\n", i, nbr[i]);
		i++;
	}
	ft_printf("\n");
}

int	*ft_merge_sort(int *nbr, int count)
{
	int	*ret;
	return (ret);
}

int	push_swap(int *nbr, int	count)
{
	int	*ret;
	ft_print_arr(nbr, count);
	ret = ft_merge_sort(nbr, count);
	ft_print_arr(ret, count);
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
