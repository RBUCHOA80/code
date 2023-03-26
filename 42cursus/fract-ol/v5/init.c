/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:42:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/03/21 19:06:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	init_struct(t_fractol *exec)
{
	exec->mlx = mlx_init();
	exec->win = mlx_new_window(exec->mlx, WIDTH, HEIGHT, "42|RIO - fract-ol");
	exec->img = NULL;
	exec->buf = NULL;
	exec->set = MANDELBROT;
	exec->max_r = 0;
	exec->min_r = 0;
	exec->max_i = 0;
	exec->min_i = 0;
	exec->kr = 0;
	exec->ki = 0;
	exec->sx = 0.0;
	exec->rx = 0.5;
	exec->fx = 1.0;
	exec->palette = NULL;
	exec->color_pattern = -1;
	exec->color = 0x9400D3;
	get_complex_layout(exec);
	color_shift(exec);
}

void	get_complex_layout(t_fractol *exec)
{
	if (exec->set == JULIA)
	{
		exec->max_r = 2.0;
		exec->min_r = -2.0;
		exec->max_i = \
			exec->min_i + (exec->max_r - exec->min_r) * HEIGHT / WIDTH;
		exec->min_i = -2.0;
	}
	else
	{
		exec->max_r = 1.0;
		exec->min_r = -2.0;
		exec->max_i = -1.5;
		exec->min_i = \
			exec->max_i + (exec->max_r - exec->min_r) * HEIGHT / WIDTH;
	}
}

//verificado

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
