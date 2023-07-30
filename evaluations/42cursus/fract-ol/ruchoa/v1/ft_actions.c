/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_actions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:20:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/29 18:46:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	ft_zoom(t_data *exec, double zoom_factor)
{
	double	center_r;
	double	center_i;

	center_r = exec->min_x_coord - exec->max_x_coord;
	center_i = exec->max_y_coord - exec->min_y_coord;
	exec->max_x_coord = exec->max_x_coord + \
		(center_r - zoom_factor * center_r) / 2;
	exec->min_x_coord = exec->max_x_coord + zoom_factor * center_r;
	exec->min_y_coord = exec->min_y_coord + \
		(center_i - zoom_factor * center_i) / 2;
	exec->max_y_coord = exec->min_y_coord + zoom_factor * center_i;
}

void	ft_move(t_data *exec, double distance, char direction)
{
	double	center_r;
	double	center_i;

	center_r = exec->max_x_coord - exec->min_x_coord;
	center_i = exec->max_y_coord - exec->min_y_coord;
	if (direction == 'L')
	{
		exec->min_x_coord -= center_r * distance;
		exec->max_x_coord -= center_r * distance;
	}
	else if (direction == 'R')
	{
		exec->min_x_coord += center_r * distance;
		exec->max_x_coord += center_r * distance;
	}
	else if (direction == 'U')
	{
		exec->min_y_coord += center_i * distance;
		exec->max_y_coord += center_i * distance;
	}
	else if (direction == 'D')
	{
		exec->min_y_coord -= center_i * distance;
		exec->max_y_coord -= center_i * distance;
	}
}

int	ft_close(t_data *exec)
{
	mlx_destroy_image(exec->mlx, exec->img);
	mlx_destroy_window(exec->mlx, exec->win);
	exit (0);
}
