/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gneves <gneves@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 13:11:13 by gneves            #+#    #+#             */
/*   Updated: 2022/02/13 17:53:45 by gneves           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "skyscrapper.h"

void	ft_alloc_mem(t_params *p)
{
	int	i;

	i = 0;
	p->matrix = (int **)malloc(sizeof(int *) * 4);
	while (i < 4)
		p->matrix[i++] = (int *)malloc(sizeof(int) * p->size);
}

void	ft_clean_mem(t_params *p, t_board *b)
{
	int	i;

	i = 0;
	while (i < (b->size - 1))
		free(b->grid[i++]);
	free(b->grid);
	i = 0;
	while (i < (p->size - 1))
		free(p->matrix[i++]);
	free(p->matrix);
}

int	ft_log_error(void)
{
	write(1, "Error\n", 6);
	return (1);
}
