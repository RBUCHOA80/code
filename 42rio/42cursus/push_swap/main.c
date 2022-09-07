/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:37:22 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/06 23:23:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
/* #include <fcntl.h>

int	main(void)
{
	char	**list;
	char	*ret;
	int		*arr;
	int		count;
	int		i;

	i = open("./aux_files/array_de_inteiros.txt", O_RDONLY);
	ret = get_next_line(i);
	close(i);
	list = ft_split(ret, ',');
	free(ret);
	count = 0;
	while (list[count])
		count++;
	arr = ft_calloc(count, sizeof(*arr));
	if (!arr)
		return (1);
	i = -1;
	while (++i < count)
		arr[i] = ft_atoi(list[i]);
	while (i >= 0)
		free(list[i--]);
	free(list);
	ft_merge_sort(arr, 0, count - 1);
	while (++i < count)
		ft_printf("arr[%i] -> %i\n", i, arr[i]);
	free(arr);
	return (0);
} */

/* int	g_arr[] = {\
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
	push_swap(g_arr, start, end - 1);
	ft_printf_arr(g_arr, end);
	return (0);
} */
