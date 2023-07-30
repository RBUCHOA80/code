/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:47:03 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/29 22:39:20 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	ft_init(t_data *exec)
{
	int		bits_per_pixel;
	int		line_length;
	int		endian;

	exec->mlx = mlx_init();
	exec->win = mlx_new_window \
		(exec->mlx, WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITTLE);
	exec->img = mlx_new_image(exec->mlx, WINDOW_WIDTH, WINDOW_HEIGHT);
	exec->pixels = mlx_get_data_addr \
		(exec->img, &bits_per_pixel, &line_length, &endian);
	ft_window_limits(exec);
	exec->color_table = ft_calloc((MAX_ITERATIONS + 1), sizeof(int));
	exec->color = 0;
	ft_set_color(exec);
}

void	ft_window_limits(t_data *exec)
{
	if (exec->set == JULIA)
	{
		ft_julia_limits(exec);
		return ;
	}
	else if (exec->set == BURNING_SHIP)
	{
		exec->min_x_coord = -1.815;
		exec->max_x_coord = -1.705;
		exec->min_y_coord = -0.025;
	}
	else
	{
		exec->min_x_coord = -2.0;
		exec->max_x_coord = 1.0;
		exec->min_y_coord = -1.5;
	}
	exec->const_x = 0.0;
	exec->const_y = 0.0;
	exec->max_y_coord = exec->min_y_coord + \
	(exec->max_x_coord - exec->min_x_coord) * WINDOW_HEIGHT / WINDOW_WIDTH;
}

void	ft_julia_limits(t_data *exec)
{
	exec->const_x = 0.312;
	exec->const_y = 0.496;
	if (exec->type == 2)
	{
		exec->const_x = -0.792;
		exec->const_y = 0.148;
	}
	exec->min_x_coord = -2.0;
	exec->max_x_coord = 2.0;
	exec->min_y_coord = -2.0;
	exec->max_y_coord = exec->min_y_coord + \
	(exec->max_x_coord - exec->min_x_coord) * WINDOW_HEIGHT / WINDOW_WIDTH;
	return ;
}
