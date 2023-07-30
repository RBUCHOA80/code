/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_fractol_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:55:07 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/30 13:07:23 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol_bonus.h"

int	ft_check_fractal(t_data *exec, double pixel_x_coord, double pixel_y_coord)
{
	int	nbr_iter;

	if (exec->set == MANDELBROT)
		nbr_iter = set_mandelbrot(pixel_x_coord, pixel_y_coord);
	else if (exec->set == JULIA)
		nbr_iter = set_julia(exec, pixel_x_coord, pixel_y_coord);
	else if (exec->set == 2)
		nbr_iter = set_julia(exec, pixel_x_coord, pixel_y_coord);
	else if (exec->set == BURNING_SHIP)
		nbr_iter = set_burning_ship(pixel_x_coord, pixel_y_coord);
	else if (exec->set == TRICORN)
		nbr_iter = set_tricorn(pixel_x_coord, pixel_y_coord);
	return (nbr_iter);
}
