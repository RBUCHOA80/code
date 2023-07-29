/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   julia.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 14:48:11 by egomes-j          #+#    #+#             */
/*   Updated: 2023/07/29 12:24:03 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	put_color_julia(t_data *img, int x, int y, int n)
{
	if (n >= 0 && n <= 10)
		my_mlx_pixel_put(img, x, y, 0x543005);
	if (n > 10 && n < 20)
		my_mlx_pixel_put(img, x, y, 0x8c510a);
	if (n >= 20 && n <= 30)
		my_mlx_pixel_put(img, x, y, 0xbf812d);
	if (n > 30 && n < 40)
		my_mlx_pixel_put(img, x, y, 0xdfc27d);
	if (n >= 40 && n <= 50)
		my_mlx_pixel_put(img, x, y, 0xf6e8c3);
	if (n > 50 && n < 60)
		my_mlx_pixel_put(img, x, y, 0xf5f5f5);
	if (n >= 60 && n <= 70)
		my_mlx_pixel_put(img, x, y, 0xc7eae5);
	if (n > 70 && n < 80)
		my_mlx_pixel_put(img, x, y, 0x80cdc1);
	if (n >= 80 && n <= 90)
		my_mlx_pixel_put(img, x, y, 0x35978f);
	if (n > 90 && n <= 100)
		my_mlx_pixel_put(img, x, y, 0x01665e);
}

void	sel_julia(t_data *img)
{
	if (img->set_julia == 1)
	{
		img->imag = 0.355;
		img->real = 0.355;
	}
	if (img->set_julia == 2)
	{
		img->real = 0.34;
		img->imag = (-0.05);
	}
}

void	julia(t_data *img, double z_r, double z_i)
{
	int		n;
	double	tmp;
	int		is_in_set;

	n = -1;
	is_in_set = 1;
	sel_julia(img);
	while (++n < MAX_ITERATIONS)
	{
		if ((z_r * z_r + z_i * z_i) > 4.0)
		{
			is_in_set = 0;
			break ;
		}
		tmp = 2 * z_r * z_i + img->imag;
		z_r = z_r * z_r - z_i * z_i + img->real;
		z_i = tmp;
	}
	if (is_in_set == 1)
		my_mlx_pixel_put(img, img->x, img->y, 0x003c30);
	else
		put_color_julia(img, img->x, img->y, n);
}
