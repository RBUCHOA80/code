/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 12:04:55 by egomes-j          #+#    #+#             */
/*   Updated: 2023/02/04 16:01:42 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	put_color_mandelbrot(t_data *img, int x, int y, int n)
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

void	mandelbrot(t_data *img, double cr, double ci)
{
	int		n;
	double	z_r;
	double	z_i;
	double	tmp;
	int		is_in_set;

	z_r = 0;
	z_i = 0;
	n = -1;
	is_in_set = 1;
	while (++n < MAX_ITERATIONS)
	{
		if ((z_r * z_r + z_i * z_i) > 4.0)
		{
			is_in_set = 0;
			break ;
		}
		tmp = 2 * z_r * z_i + ci;
		z_r = z_r * z_r - z_i * z_i + cr;
		z_i = tmp;
	}
	if (is_in_set == 1)
		my_mlx_pixel_put(img, img->x, img->y, 0x003c30);
	else
		put_color_mandelbrot(img, img->x, img->y, n);
}
