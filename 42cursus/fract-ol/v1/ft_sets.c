/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sets.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:55:07 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/29 16:07:37 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	set_mandelbrot(double c_real, double c_imaginary)
{
	int		nbr_iter;
	double	z_real;
	double	z_imaginary;
	double	temp;

	z_real = 0;
	z_imaginary = 0;
	nbr_iter = 0;
	while (nbr_iter < MAX_ITERATIONS)
	{
		if ((z_real * z_real + z_imaginary * z_imaginary) > 4.0)
			break ;
		temp = 2 * z_real * z_imaginary + c_imaginary;
		z_real = z_real * z_real - z_imaginary * z_imaginary + c_real;
		z_imaginary = temp;
		nbr_iter++;
	}
	return (nbr_iter);
}

int	ft_julia_shift(int x, int y, t_data *exec)
{
	exec->const_x = exec->min_x_coord + (double)x * (exec->max_x_coord - exec->min_x_coord) / WINDOW_WIDTH;
	exec->const_y = exec->max_y_coord + (double)y * (exec->min_y_coord - exec->max_y_coord) / WINDOW_HEIGHT;
	ft_draw(exec);
	return (0);
}

int	set_julia(t_data *exec, double nbr_real, double nbr_imaginary)
{
	int		nbr_iter;
	double	tmp;

	nbr_iter = 0;
	while (nbr_iter < MAX_ITERATIONS)
	{
		if ((nbr_imaginary * nbr_imaginary + nbr_real * nbr_real) > 4.0)
			break ;
		tmp = 2 * nbr_real * nbr_imaginary + exec->const_y;
		nbr_real = nbr_real * nbr_real - nbr_imaginary * nbr_imaginary + exec->const_x;
		nbr_imaginary = tmp;
		nbr_iter++;
	}
	return (nbr_iter);
}

int	set_burning_ship(double nbr_real, double nbr_imaginary)
{
	int		nbr_iter;
	double	zr;
	double	zi;
	double	tmp;

	zr = 0;
	zi = 0;
	nbr_iter = 0;
	while (nbr_iter < MAX_ITERATIONS)
	{
		if ((zr * zr + zi * zi) > 4.0)
			break ;
		zr = ft_abs(zr);
		zi = ft_abs(zi);
		tmp = -2 * zr * zi + nbr_imaginary;
		zr = zr * zr - zi * zi + nbr_real;
		zi = tmp;
		nbr_iter++;
	}
	return (nbr_iter);
}

int	set_tricorn(double nbr_real, double nbr_imaginary)
{
	int		nbr_iter;
	double	zr;
	double	zi;
	double	tmp;

	zr = nbr_real;
	zi = nbr_imaginary;
	nbr_iter = 0;
	while (nbr_iter < MAX_ITERATIONS)
	{
		if ((zr * zr + zi * zi) > 4.0)
			break ;
		tmp = -2 * zr * zi + nbr_imaginary;
		zr = zr * zr - zi * zi + nbr_real;
		zi = tmp;
		nbr_iter++;
	}
	return (nbr_iter);
}
