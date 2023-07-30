/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:33:10 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/29 22:37:10 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

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
			pixel_x_coord = exec->min_x_coord + (double)x * \
				(exec->max_x_coord - exec->min_x_coord) / WINDOW_WIDTH;
			pixel_y_coord = exec->max_y_coord + (double)y * \
				(exec->min_y_coord - exec->max_y_coord) / WINDOW_HEIGHT;
			nbr = ft_check_fractal(exec, pixel_x_coord, pixel_y_coord);
			ft_set_pixel_color(exec, x, y, exec->color_table[nbr]);
		}
	}
	mlx_put_image_to_window(exec->mlx, exec->win, exec->img, 0, 0);
}
