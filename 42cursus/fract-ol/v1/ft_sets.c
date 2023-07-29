/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sets.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:55:07 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/29 17:32:28 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"
#include <stdio.h>

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

int	set_julia(t_data *exec, double x, double nbr_imaginary)
{
	int		nbr_iter;
	double	tmp;

	nbr_iter = 0;
	while (nbr_iter < MAX_ITERATIONS)
	{
		if ((nbr_imaginary * nbr_imaginary + x * x) > 4.0)
			break ;
		tmp = 2 * x * nbr_imaginary + exec->const_y;
		x = x * x - nbr_imaginary * nbr_imaginary + exec->const_x;
		nbr_imaginary = tmp;
		nbr_iter++;
	}
	return (nbr_iter);
}

int	set_burning_ship(double x, double nbr_imaginary)
{
	int		nbr_iter;
	double	z_real;
	double	z_imaginary;
	double	tmp;

	z_real = 0;
	z_imaginary = 0;
	nbr_iter = 0;
	while (nbr_iter < MAX_ITERATIONS)
	{
		if ((z_real * z_real + z_imaginary * z_imaginary) > 4.0)
			break ;
		z_real = ft_abs(z_real);
		z_imaginary = ft_abs(z_imaginary);
		tmp = -2 * z_real * z_imaginary + nbr_imaginary;
		z_real = z_real * z_real - z_imaginary * z_imaginary + x;
		z_imaginary = tmp;
		nbr_iter++;
	}
	return (nbr_iter);
}

int	set_tricorn(double x, double nbr_imaginary)
{
	int		nbr_iter;
	double	z_real;
	double	z_imaginary;
	double	tmp;

	z_real = x;
	z_imaginary = nbr_imaginary;
	nbr_iter = 0;
	while (nbr_iter < MAX_ITERATIONS)
	{
		if ((z_real * z_real + z_imaginary * z_imaginary) > 4.0)
			break ;
		tmp = -2 * z_real * z_imaginary + nbr_imaginary;
		z_real = z_real * z_real - z_imaginary * z_imaginary + x;
		z_imaginary = tmp;
		nbr_iter++;
	}
	return (nbr_iter);
}
