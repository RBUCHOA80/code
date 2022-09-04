/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:37:22 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/03 22:24:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	g_arr[] = {\
					40, \
					30, \
					90, \
					20, \
					6234534, \
					-4567576, \
					5435235, \
					-6467347, \
					-45325, \
					5235433, \
					10, \
					80, \
					70, \
					60, \
					50, \
				};

int	main(void)
{
	int	start;
	int	end;

	start = 0;
	end = ((sizeof(g_arr) / sizeof(*g_arr)));
	ft_merge_sort(g_arr, start, end - 1);
	ft_printf_arr(g_arr, end);
	return (0);
}
