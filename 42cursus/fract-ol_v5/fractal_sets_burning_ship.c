/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal_sets_burning_ship.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:43:40 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/27 19:45:55 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/* burning_ship:
*	Checks whether a complex number is part of the Burning Ship set or not.
*	Takes as parameters the real and imaginary coordinates of a point,
*	converted previously from a pixel's coordinates.
*	Returns the number of iterations before the number escapes 
*	the Burning Ship set, which can then be used to determine coloring.
*/
int	burning_ship(double cr, double ci)
{
	int		n;
	double	zr;
	double	zi;
	double	tmp;

	zr = 0;
	zi = 0;
	n = 0;
	while (n < MAX_ITERATIONS)
	{
		if ((zr * zr + zi * zi) > 4.0)
			break ;
		zr = ft_abs(zr);
		zi = ft_abs(zi);
		tmp = 2 * zr * zi + ci;
		zr = zr * zr - zi * zi + cr;
		zi = tmp;
		n++;
	}
	return (n);
}
