/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 21:37:22 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/05 16:31:12 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <fcntl.h>

int	main(void)
{
	char	**lista;
	char	*ret;
	int		*arr;
	int		count;
	int		fd;
	int		i;

	fd = open("./array_de_inteiros.txt", O_RDONLY);
	ret = get_next_line(fd);
	lista = ft_split(ret, ',');
	count = 0;
	while (lista[count])
		count++;
	arr = ft_calloc(count, sizeof(*arr));
	if (!arr)
		return(1);
	i = -1;
	while (++i < count)
		arr[i] = ft_atoi(lista[i]);
	i = -1;
	while (++i < count)
		ft_printf("arr[%i] -> %i\n", i, arr[i]);
	free(arr);
	close(fd);
	return (0);
}

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

/* int	main(int argc, char **argv)
{
	int	*arr;
	int	i;

	if (argc < 2)
		return (1);
	argc -= 1;
	arr = ft_calloc(argc, sizeof(*arr));
	i = -1;
	while (++i < argc)
		arr[i] = ft_atoi(argv[i + 1]);
	push_swap(arr, 0, argc - 1);
	ft_printf_arr(arr, argc);
	free(arr);
	return (0);
} */
