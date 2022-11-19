/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <gneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 23:58:28 by gneves            #+#    #+#             */
/*   Updated: 2022/02/12 23:58:28 by gneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper.h"

int	find_unassigned_location(t_board *b, int *row, int *col)
{
	*row = 0;
	*col = 0;
	while (*row < b->size)
	{
		*col = 0;
		while (*col < b->size)
		{
			if (b->grid[*row][*col] == 0)
				return (1);
			(*col)++;
		}
		(*row)++;
	}
	return (0);
}

int	is_safe(t_board *b, int row, int col, int num)
{
	if (!is_used_in_row(b, row, num)
		&& !is_used_in_column(b, col, num)
		&& b->grid[row][col] == 0)
		return (1);
	return (0);
}

int	skyscraper_solver(t_board *b, t_params *p)
{
	int	row;
	int	col;
	int	num;

	if (!find_unassigned_location(b, &row, &col))
	{
		if (is_valid_board(b, p))
			return (1);
		return (0);
	}
	num = 1;
	while (num <= b->size)
	{
		if (is_safe(b, row, col, num))
		{
			b->grid[row][col] = num;
			if (skyscraper_solver(b, p))
				return (1);
			b->grid[row][col] = 0;
		}
		num++;
	}
	return (0);
}

void	ft_skyscrapper_print(t_board *b)
{
	char	c;
	int		i;
	int		j;

	i = 0;
	while (i < b->size)
	{
		j = 0;
		while (j < b->size)
		{
			c = b->grid[i][j] + '0';
			write(1, &c, 1);
			if (j != b->size - 1)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

void	ft_skyscrapper_init(t_board	*b, int size)
{
	int	i;
	int	j;

	i = 0;
	b->size = size;
	b->grid = (int **)malloc(b->size * sizeof(int *));
	while (i < b->size)
		b->grid[i++] = (int *)malloc(b->size * sizeof(int));
	i = 0;
	while (i < b->size)
	{
		j = 0;
		while (j < b->size)
		{
			b->grid[i][j] = 0;
			j++;
		}
		i++;
	}
}
