/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_fractol.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:55:07 by ruchoa            #+#    #+#             */
/*   Updated: 2023/06/03 18:47:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	mandelbrot(double c_real, double c_imaginary)
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

int	julia(t_data *exec, double nbr_real, double nbr_imaginary)
{
	int	nbr_iter;

	(void)exec;
	(void)nbr_real;
	(void)nbr_imaginary;
	nbr_iter = 1;
	return (nbr_iter);
}

int	burning_ship(double nbr_real, double nbr_imaginary)
{
	int	nbr_iter;

	(void)nbr_real;
	(void)nbr_imaginary;
	nbr_iter = 1;
	return (nbr_iter);
}

int	tricorn(double nbr_real, double nbr_imaginary)
{
	int	nbr_iter;

	(void)nbr_real;
	(void)nbr_imaginary;
	nbr_iter = 1;
	return (nbr_iter);
}

int	ft_check_fractal(t_data *exec, double nbr_real, double nbr_imaginary)
{
	int	nbr_iter;

	if (exec->set == JULIA)
		nbr_iter = julia(exec, nbr_real, nbr_imaginary);
	else if (exec->set == BURNING_SHIP)
		nbr_iter = burning_ship(nbr_real, nbr_imaginary);
	else if (exec->set == TRICORN)
		nbr_iter = tricorn(nbr_real, nbr_imaginary);
	else
		nbr_iter = mandelbrot(nbr_real, nbr_imaginary);
	return (nbr_iter);
}
