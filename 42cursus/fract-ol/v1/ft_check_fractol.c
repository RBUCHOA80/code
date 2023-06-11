/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_fractol.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:55:07 by ruchoa            #+#    #+#             */
/*   Updated: 2023/06/11 17:53:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	ft_check_fractal(t_data *exec, double pixel_x_coord, double pixel_y_coord)
{
	int	nbr_iter;

	if (exec->set == JULIA)
		nbr_iter = julia(exec, pixel_x_coord, pixel_y_coord);
	else if (exec->set == BURNING_SHIP)
		nbr_iter = burning_ship(pixel_x_coord, pixel_y_coord);
	else if (exec->set == TRICORN)
		nbr_iter = tricorn(pixel_x_coord, pixel_y_coord);
	else if (exec->set == MANDELBOX)
		nbr_iter = mandelbox(pixel_x_coord, pixel_y_coord);
	else
		nbr_iter = mandelbrot(pixel_x_coord, pixel_y_coord);
	return (nbr_iter);
}
