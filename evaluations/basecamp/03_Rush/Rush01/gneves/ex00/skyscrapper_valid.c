/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper_valid.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <gneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 20:57:49 by gneves            #+#    #+#             */
/*   Updated: 2022/02/12 20:57:49 by gneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper.h"

int	is_possible_from_top(t_board *b, int col, int *colup)
{
	int	i;
	int	higher;
	int	visibles;

	i = 1;
	visibles = 1;
	higher = b->grid[0][col];
	while (i < b->size)
	{
		if (b->grid[i][col] > higher)
		{
			higher = b->grid[i][col];
			visibles++;
		}
		i++;
	}
	if (visibles == colup[col])
		return (1);
	return (0);
}

int	is_possible_from_bottom(t_board *b, int col, int *coldown)
{
	int	i;
	int	higher;
	int	visibles;

	i = b->size - 1;
	visibles = 1;
	higher = b->grid[b->size - 1][col];
	while (i >= 0)
	{
		if (b->grid[i][col] > higher)
		{
			higher = b->grid[i][col];
			visibles++;
		}
		i--;
	}
	if (visibles == coldown[col])
		return (1);
	return (0);
}

int	is_possible_from_left(t_board *b, int row, int *rowleft)
{
	int	i;
	int	higher;
	int	visibles;

	i = 0;
	visibles = 1;
	higher = b->grid[row][0];
	while (i < b->size)
	{
		if (b->grid[row][i] > higher)
		{
			higher = b->grid[row][i];
			visibles++;
		}
		i++;
	}
	if (visibles == rowleft[row])
	{
		return (1);
	}
	return (0);
}

int	is_possible_from_right(t_board *b, int row, int *rowright)
{
	int	i;
	int	higher;
	int	visibles;

	i = b->size - 1;
	visibles = 1;
	higher = b->grid[row][b->size - 1];
	while (i >= 0)
	{
		if (b->grid[row][i] > higher)
		{
			higher = b->grid[row][i];
			visibles++;
		}
		i--;
	}
	if (visibles == rowright[row])
		return (1);
	return (0);
}

int	is_valid_board(t_board *b, t_params *params)
{
	int	row;
	int	col;

	row = 0;
	while (row < b->size)
	{
		if (!is_possible_from_left(b, row, params->matrix[2])
			|| !is_possible_from_right(b, row, params->matrix[3]))
			return (0);
		row++;
	}
	col = 0;
	while (col < b->size)
	{
		if (!is_possible_from_top(b, col, params->matrix[0])
			|| !is_possible_from_bottom(b, col, params->matrix[1]))
			return (0);
		col++;
	}
	return (1);
}
