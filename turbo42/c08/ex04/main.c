/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:52:53 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/19 01:31:33 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>
#include <stdio.h>

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av);

int	main(int ac, char **av)
{
	struct s_stock_str	*data_table;
	int					index;

	data_table = ft_strs_to_tab((ac), av);
	index = 1;
	while (index <= ac)
	{
		printf("%i\n%p => %s\n%p => %s\n", \
		data_table[index].size, \
		data_table[index].str, data_table[index].str, \
		data_table[index].copy, data_table[index].copy);
		index++;
	}
	free(data_table);
	return (0);
}
