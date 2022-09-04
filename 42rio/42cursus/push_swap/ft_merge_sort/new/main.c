/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:37:22 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/03 21:48:04 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	mergeSort(int *V, int inicio, int fim);

void	ft_printf_arr(int *arr, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("arr[%i] = %d\n", i, arr[i]);
		i++;
	}
}

int	g_arr[] = {\
					400, \
					300, \
					900, \
					200, \
					100, \
					800, \
					700, \
					600, \
					500, \
				};

int	main(void)
{
	int	elem;

	elem = (sizeof(g_arr) / sizeof(*g_arr));
	mergeSort(g_arr, 0, elem);
	ft_printf_arr(g_arr, elem);
	return (0);
}
