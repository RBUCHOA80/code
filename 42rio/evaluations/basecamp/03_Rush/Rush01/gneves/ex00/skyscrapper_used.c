/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper_used.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <gneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:58:13 by gneves            #+#    #+#             */
/*   Updated: 2022/02/12 23:58:13 by gneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper.h"

int	is_used_in_column(t_board *b, int col, int num)
{
	int	i;

	i = 0;
	while (i < b->size)
	{
		if (b->grid[i][col] == num)
			return (1);
		i++;
	}
	return (0);
}

int	is_used_in_row(t_board *b, int row, int num)
{
	int	i;

	i = 0;
	while (i < b->size)
	{
		if (b->grid[row][i] == num)
			return (1);
		i++;
	}
	return (0);
}
