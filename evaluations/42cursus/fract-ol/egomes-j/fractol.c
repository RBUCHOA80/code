/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 11:43:10 by egomes-j          #+#    #+#             */
/*   Updated: 2023/01/28 12:08:34 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	cmd_img(t_data *img, int argc)
{
	img->min_r = -2.0;
	img->focus = 0.5;
	img->focus_rm = 0.5;
	img->max_r = 1.0;
	img->min_i = -1.0;
	img->max_i = img->min_i + (img->max_r - img->min_r) * (HEIGHT / WIDTH);
	img->mlx = mlx_init();
	img->mlx_win = mlx_new_window(img->mlx, WIDTH, HEIGHT, "fractol");
	img->img = mlx_new_image(img->mlx, WIDTH, HEIGHT);
	img->addr = mlx_get_data_addr(img->img, &img->bit_per_pixel,
			&img->line_length, &img->endian);
	if (argc == 2)
		line_pixel(img);
	else
		pixel_julia(img);
	mlx_mouse_hook(img->mlx_win, mouse, img);
	mlx_key_hook(img->mlx_win, keyboard, img);
	mlx_hook(img->mlx_win, 17, 0L, handle_close, img);
	mlx_loop(img->mlx);
}

int	main(int argc, char **argv)
{
	t_data	img;

	if (argc == 2 || argc == 3)
	{
		img.argc = argc;
		if (error(argc, argv) == 1)
			img.set_julia = 1;
		if (error(argc, argv) == 2)
			img.set_julia = 2;
		cmd_img(&img, argc);
	}
	else
		error_msg();
	return (0);
}
