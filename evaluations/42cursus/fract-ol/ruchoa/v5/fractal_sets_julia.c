/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractal_sets_julia.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:43:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/16 21:22:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/* julia_shift:
*	Changes the Julia calculation kr and ki values to get a different Julia
*	fractal shape. This function should be called when the user clicks on
*	a point on the sceen.
*/
int	julia_shift(int x, int y, t_fractol *exec)
{
	exec->kr = exec->min_r + (double)x * (exec->max_r - exec->min_r) / WIDTH;
	exec->ki = exec->max_i + (double)y * (exec->min_i - exec->max_i) / HEIGHT;
	render(exec);
	return (0);
}

/* julia:
*	Checks whether a complex number is part of the Julia set or not.
*	Takes as parameters the real and imaginary coordinates of a point,
*	converted previously from a pixel's coordinates.
*	Returns the number of iterations before the number escapes 
*	the Julia set, which can then be used to determine coloring.
*/
int	julia(t_fractol *exec, double zr, double zi)
{
	int		n;
	double	tmp;

	n = 0;
	while (n < MAX_ITERATIONS)
	{
		if ((zi * zi + zr * zr) > 4.0)
			break ;
		tmp = 2 * zr * zi + exec->ki;
		zr = zr * zr - zi * zi + exec->kr;
		zi = tmp;
		n++;
	}
	return (n);
}
/*
	How it works:

	The Julia set is closely related to the Mandelbrot set:
	its formula is identical. What differs are the complex
	number we plug into it.
	
	Mandelbrot uses 0 as a starting value for zr and zi, and
	adds pixel coordinates (cr and ci) every time it iterates.

	On the other hand, Julia starts with pixel coordinates as
	zr and zi and adds another complex number (kr and ki) every time
	it iterates.

	kr and ki values determine the shape Julia will take on.
	If kr + ki is part of the Mandelbrot set, Julia will be a continuous
	solid shape. If kr + ki is not part of the Mandelbrot set, the
	Julia fractal will be a disconnected set of separate islands.
	If kr + ki is a point that is close to the Mandelbrot fractal boundary,
	the same patterns we see at that point in the Mandelbrot fractal
	will emerge in the Julia fractal.
*/