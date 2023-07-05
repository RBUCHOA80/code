/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_events.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:20:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/04 21:52:51 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	ft_zoom(t_data *exec, double ft_zoom)
{
	double	center_r;
	double	center_i;

	center_r = exec->min_x_coord - exec->max_x_coord;
	center_i = exec->max_y_coord - exec->min_y_coord;
	exec->max_x_coord = exec->max_x_coord + (center_r - ft_zoom * center_r) / 2;
	exec->min_x_coord = exec->max_x_coord + ft_zoom * center_r;
	exec->min_y_coord = exec->min_y_coord + (center_i - ft_zoom * center_i) / 2;
	exec->max_y_coord = exec->min_y_coord + ft_zoom * center_i;
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

int	ft_key_events(int keycode, t_data *exec)
{
	if (keycode == KEY_ESC)
		ft_mlx_close(exec);
	else
		ft_printf("keycode = %i\n", keycode);
	return (EXIT_SUCCESS);
}

int	ft_mouse_events(int keycode, int x, int y, t_data *exec)
{
	if (keycode == MOUSE_WHEEL_UP)
	{
		ft_zoom(exec, 0.5);
		x -= WINDOW_WIDTH / 2;
		y -= WINDOW_HEIGHT / 2;
		if (x < 0)
			ft_move(exec, (double)x * -1 / WINDOW_WIDTH, 'L');
		else if (x > 0)
			ft_move(exec, (double)x / WINDOW_WIDTH, 'R');
		if (y < 0)
			ft_move(exec, (double)y * -1 / WINDOW_HEIGHT, 'U');
		else if (y > 0)
			ft_move(exec, (double)y / WINDOW_HEIGHT, 'D');
	}
	else if (keycode == MOUSE_WHEEL_DOWN)
		ft_zoom(exec, 2);
	else if (keycode == MOUSE_LEFT_BTN)
	{
		if (exec->set == JULIA)
			ft_julia_shift(x, y, exec);
	}
	else
		return (0);
	ft_draw(exec);
	return (EXIT_SUCCESS);
}

int	ft_mlx_close(t_data *exec)
{
	mlx_destroy_image(exec->mlx, exec->img);
	mlx_destroy_window(exec->mlx, exec->win);
	exit (0);
}
