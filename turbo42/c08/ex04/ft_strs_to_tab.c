/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:51:29 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/19 01:30:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h> //malloc
#include "ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*data_table;
	int					index;
	int					length;

	data_table = malloc((ac + 1) * sizeof(struct s_stock_str));
	index = 1;
	while (index < ac)
	{
		length = 0;
		while (av[index][length])
			length++;
		data_table[index].size = length;
		data_table[index].str = av[index];
		data_table[index].copy = av[index];
		index++;
	}
	data_table[index] = (struct s_stock_str){0, 0, 0};
	return (data_table);
}
