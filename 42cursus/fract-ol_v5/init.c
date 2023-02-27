/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:42:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/27 19:23:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	init_struct(t_fractol *fract)
{
	fract->mlx = NULL;
	fract->win = NULL;
	fract->img = NULL;
	fract->buf = NULL;
	fract->set = MANDELBROT;
	fract->min_r = 0;
	fract->max_r = 0;
	fract->min_i = 0;
	fract->max_i = 0;
	fract->kr = 0;
	fract->ki = 0;
	fract->sx = 0;
	fract->rx = 0;
	fract->fx = 0;
	fract->palette = NULL;
	fract->color_pattern = -1;
	fract->color = 0;
}

void	init(t_fractol *fract)
{
	fract->mlx = mlx_init();
	fract->win = mlx_new_window(fract->mlx, WIDTH, HEIGHT, "42|RIO - fract-ol");
	fract->sx = 0.0;
	fract->rx = 0.5;
	fract->fx = 1.0;
	get_complex_layout(fract);
	color_shift(fract);
}

//verificado

/* get_complex_layout:
*	Maps the complex number axes to the window width and height to
*	create an equivalence between a given pixel and a complex number.
*		- The Mandelbox set real and imaginary axes range from 4 to -4
*		so the edges are mapped to those numbers for the fractal to appear
*		centered.
*		- Julia needs a bit more space to the right than Mandelbrot or
*		Burning Ship, so the mapping must also be shifted slightly.
*	Also, one of the edges is always calculated according to the other edges
*	to avoid fractal distortion if the window proportions change.
*/
void	get_complex_layout(t_fractol *exec)
{
	if (exec->set == MANDELBOX)
	{
		exec->min_r = -4.0;
		exec->max_r = 4.0;
		exec->min_i = -4.0;
		exec->max_i = \
			exec->min_i + (exec->max_r - exec->min_r) * HEIGHT / WIDTH;
	}
	else if (exec->set == JULIA)
	{
		exec->min_r = -2.0;
		exec->max_r = 2.0;
		exec->min_i = -2.0;
		exec->max_i = \
			exec->min_i + (exec->max_r - exec->min_r) * HEIGHT / WIDTH;
	}
	else
	{
		exec->min_r = -2.0;
		exec->max_r = 1.0;
		exec->max_i = -1.5;
		exec->min_i = \
			exec->max_i + (exec->max_r - exec->min_r) * HEIGHT / WIDTH;
	}
}

/* init_img:
*	Initializes an MLX image and a color palette. The color palette will
*	be used to store every shade of color for every iteration number,
*	and the color of each pixel will be stored in the image, which will
*	then be displayed in the program window.
*/
static void	init_img(t_fractol *exec)
{
	int		pixel_bits;
	int		line_bytes;
	int		endian;
	char	*buf;

	exec->palette = ft_calloc((MAX_ITERATIONS + 1), sizeof(int));
	if (!(exec->palette))
		clean_exit(msg("error initializing color scheme.", "", 1), exec);
	exec->img = mlx_new_image(exec->mlx, WIDTH, HEIGHT);
	if (!(exec->img))
		clean_exit(msg("image creation error.", "", 1), exec);
	buf = mlx_get_data_addr(exec->img, &pixel_bits, &line_bytes, &endian);
	exec->buf = buf;
}

/* reinit_image:
*	Cleanly reinitializes the MLX image if the color palette or 
*	fractal type is modified at runtime.
*/
void	reinit_img(t_fractol *exec)
{
	if (exec->mlx && exec->img)
		mlx_destroy_image(exec->mlx, exec->img);
	if (exec->palette)
		free(exec->palette);
	if (exec->buf)
		exec->buf = NULL;
	init_img(exec);
}
