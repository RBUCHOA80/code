/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:05:24 by egomes-j          #+#    #+#             */
/*   Updated: 2023/01/28 12:08:19 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	line_pixel(t_data *img)
{
	double	num_r;
	double	num_i;

	img->x = 0;
	while (img->x < WIDTH)
	{
		img->y = 0;
		while (img->y < HEIGHT)
		{
			num_r = (img->focus_rm - 0.5) + (img->min_r + (double)img->x
					* (img->max_r - img->min_r) / WIDTH);
			num_i = -img->focus + (img->min_i + (double)img->y
					* (img->max_i - img->min_i) / HEIGHT);
			mandelbrot(img, num_r, num_i);
			img->y++;
		}
		img->x++;
	}
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, 0, 0);
}

void	pixel_julia(t_data *img)
{
	double	num_r;
	double	num_i;

	img->x = 0;
	while (img->x < WIDTH)
	{
		img->y = 0;
		while (img->y < HEIGHT)
		{
			num_r = img->focus_rm + (img->min_r + (double)img->x
					* (img->max_r - img->min_r) / WIDTH);
			num_i = -img->focus + (img->min_i + (double)img->y
					* (img->max_i - img->min_i) / HEIGHT);
			julia(img, num_r, num_i);
			img->y++;
		}
		img->x++;
	}
	mlx_put_image_to_window(img->mlx, img->mlx_win, img->img, 0, 0);
}
