/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:42:57 by ruchoa            #+#    #+#             */
/*   Updated: 2023/03/04 21:33:11 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

static int	calculate_fractal(t_fractol *exec, double pr, double pi)
{
	int	nb_iter;

	if (exec->set == MANDELBROT)
		nb_iter = mandelbrot(pr, pi);
	else if (exec->set == JULIA)
		nb_iter = julia(exec, pr, pi);
	else if (exec->set == BURNING_SHIP)
		nb_iter = burning_ship(pr, pi);
	else if (exec->set == TRICORN)
		nb_iter = tricorn(pr, pi);
	else
		nb_iter = mandelbrot(pr, pi);
	return (nb_iter);
}

static void	set_pixel_color(t_fractol *exec, int x, int y, int color)
{
		exec->buf[x * 4 + y * WIDTH * 4] = color;
		exec->buf[x * 4 + y * WIDTH * 4 + 1] = color >> 8;
		exec->buf[x * 4 + y * WIDTH * 4 + 2] = color >> 16;
		exec->buf[x * 4 + y * WIDTH * 4 + 3] = color >> 24;
}

void	render(t_fractol *exec)
{
	int		x;
	int		y;
	double	pr;
	double	pi;
	int		nb_iter;

	mlx_clear_window(exec->mlx, exec->win);
	y = -1;
	while (++y < HEIGHT)
	{
		x = -1;
		while (++x < WIDTH)
		{
			pr = exec->min_r + (double)x * (exec->max_r - exec->min_r) / WIDTH;
			pi = exec->max_i + (double)y * (exec->min_i - exec->max_i) / HEIGHT;
			nb_iter = calculate_fractal(exec, pr, pi);
			set_pixel_color(exec, x, y, exec->palette[nb_iter]);
		}
	}
	mlx_put_image_to_window(exec->mlx, exec->win, exec->img, 0, 0);
}
