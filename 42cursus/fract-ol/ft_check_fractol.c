/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_fractol.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:55:07 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/30 14:49:30 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	ft_check_fractal(t_data *exec, double pixel_x_coord, double pixel_y_coord)
{
	int	nbr_iter;

	if (exec->set == MANDELBROT)
		nbr_iter = set_mandelbrot(pixel_x_coord, pixel_y_coord);
	else if (exec->set == JULIA)
		nbr_iter = set_julia(exec, pixel_x_coord, pixel_y_coord);
	else if (exec->set == 2)
		nbr_iter = set_julia(exec, pixel_x_coord, pixel_y_coord);
	return (nbr_iter);
}
