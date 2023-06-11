/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:33:10 by ruchoa            #+#    #+#             */
/*   Updated: 2023/06/11 00:51:44 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

static void	ft_pixel_color(t_data *exec, int x, int y, int color)
{
	exec->buf[x * 4 + y * WINDOW_WIDTH * 4 + 0] = color >> 0;
	exec->buf[x * 4 + y * WINDOW_WIDTH * 4 + 1] = color >> 8;
	exec->buf[x * 4 + y * WINDOW_WIDTH * 4 + 2] = color >> 16;
	exec->buf[x * 4 + y * WINDOW_WIDTH * 4 + 3] = color >> 24;
}

void	ft_draw(t_data *exec)
{
	int		x;
	int		y;
	int		nbr;
	double	pixel_x_coord;
	double	pixel_y_coord;

	mlx_clear_window(exec->mlx, exec->win);
	y = -1;
	while (++y < WINDOW_HEIGHT)
	{
		x = -1;
		while (++x < WINDOW_WIDTH)
		{
			pixel_x_coord = exec->min_x_coord + (double)x * (exec->max_x_coord - exec->min_x_coord) / WINDOW_WIDTH;
			pixel_y_coord = exec->max_y_coord + (double)y * (exec->min_y_coord - exec->max_y_coord) / WINDOW_HEIGHT;
			nbr = ft_check_fractal(exec, pixel_x_coord, pixel_y_coord);
			ft_pixel_color(exec, x, y, exec->palette[nbr]);
		}
	}
	mlx_put_image_to_window(exec->mlx, exec->win, exec->img, 0, 0);
}
