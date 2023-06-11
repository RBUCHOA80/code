/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:47:03 by ruchoa            #+#    #+#             */
/*   Updated: 2023/06/11 18:25:50 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	ft_window_limits(t_data *exec)
{
	if (exec->set == MANDELBOX)
	{
		exec->min_x_coord = -4.0;
		exec->max_x_coord = 4.0;
		exec->min_y_coord = -4.0;
		exec->max_y_coord = exec->min_y_coord + (exec->max_x_coord - exec->min_x_coord) * WINDOW_HEIGHT / WINDOW_WIDTH;
	}
	else if (exec->set == JULIA)
	{
		exec->min_x_coord = -2.0;
		exec->max_x_coord = 2.0;
		exec->min_y_coord = -2.0;
		exec->max_y_coord = exec->min_y_coord + (exec->max_x_coord - exec->min_x_coord) * WINDOW_HEIGHT / WINDOW_WIDTH;
	}
	else
	{
		exec->min_x_coord = -2.0;
		exec->max_x_coord = 1.0;
		exec->min_y_coord = -1.5;
		exec->max_y_coord = exec->min_y_coord + (exec->max_x_coord - exec->min_x_coord) * WINDOW_HEIGHT / WINDOW_WIDTH;
	}
}

int	ft_interpolate(int startcolor, int endcolor, double fraction)
{
	int	start_rgb[3];
	int	end_rgb[3];

	start_rgb[0] = ((startcolor >> 16) & 0xFF);
	start_rgb[1] = ((startcolor >> 8) & 0xFF);
	start_rgb[2] = ((startcolor >> 0) & 0xFF);
	end_rgb[0] = ((endcolor >> 16) & 0xFF);
	end_rgb[1] = ((endcolor >> 8) & 0xFF);
	end_rgb[2] = ((endcolor >> 0) & 0xFF);
	start_rgb[0] = (end_rgb[0] - start_rgb[0]) * fraction + start_rgb[0];
	start_rgb[1] = (end_rgb[1] - start_rgb[1]) * fraction + start_rgb[1];
	start_rgb[2] = (end_rgb[2] - start_rgb[2]) * fraction + start_rgb[2];
	return (0xFF << 24 | start_rgb[0] << 16 | start_rgb[1] << 8 | start_rgb[2]);
}

void	ft_set_color_mono(t_data *f, int color)
{
	int		i;
	int		j;
	double	fraction;
	int		color1;
	int		color2;

	color1 = 0x000000;
	color2 = color;
	i = 0;
	while (i < MAX_ITERATIONS)
	{
		j = 0;
		while (j < MAX_ITERATIONS / 2)
		{
			fraction = (double)j / (MAX_ITERATIONS / 2);
			f->color_table[i + j] = ft_interpolate(color1, color2, fraction);
			j++;
		}
		color1 = color2;
		color2 = 0xFFFFFF;
		i += j;
	}
	f->color_table[MAX_ITERATIONS -1] = 0;
}

void	ft_set_color(t_data *exec)
{
	ft_set_color_mono(exec, 0xFFFFFF);
}

/* void	ft_set_color(t_data *exec)
{
	int	alt_color;

	exec->change_color = (exec->change_color + 1) % 9;
	if (exec->color == 0x000000)
		alt_color = 0x333333;
	else
		alt_color = exec->color;
	ft_set_color_mono(exec, alt_color);
} */

void	ft_init(t_data *exec)
{
	int		bits_per_pixel;
	int		line_length;
	int		endian;

	exec->mlx = mlx_init();
	exec->win = mlx_new_window(exec->mlx, WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITTLE);
	exec->img = mlx_new_image(exec->mlx, WINDOW_WIDTH, WINDOW_HEIGHT);
	exec->pixels = mlx_get_data_addr(exec->img, &bits_per_pixel, &line_length, &endian);
	exec->color_table = ft_calloc((MAX_ITERATIONS + 1), sizeof(int));
	exec->set = MANDELBROT;
	ft_window_limits(exec);
	ft_set_color(exec);
}
