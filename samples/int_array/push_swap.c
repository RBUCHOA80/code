/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 19:26:02 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/06 23:25:19 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(int *arr, int start, int end)
{
	ft_merge_sort(arr, start, end);
}

/* int	main(int argc, char **argv)
{
	int	*arr;
	int	i;

	if (argc < 2)
		return (1);
	argc -= 1;
	arr = ft_calloc(argc, sizeof(*arr));
	if (!arr)
		return(1);
	i = -1;
	while (++i < argc)
		arr[i] = ft_atoi(argv[i + 1]);
	push_swap(arr, 0, argc - 1);
	ft_printf_arr(arr, argc);
	free(arr);
	return (0);
} */
