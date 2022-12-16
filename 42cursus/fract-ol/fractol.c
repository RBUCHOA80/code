/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:26:49 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/10 08:33:31 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	main(void)
{
	t_data	exec;
	int		x;
	int		y;

	exec.mlx = mlx_init();
	exec.win = mlx_new_window(exec.mlx, WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITTLE);
	exec.img = mlx_new_image(exec.mlx, WINDOW_WIDTH, WINDOW_HEIGHT);
	exec.addr = mlx_get_data_addr(exec.img, &exec.bits_per_pixel, &exec.line_length, &exec.endian);
	mlx_hook(exec.win, ON_KEYUP, (1L<<1), &events, &exec);
	mlx_hook(exec.win, ON_DESTROY, (1L<<17), &close, &exec);
	x = 0;
	while (x < WINDOW_WIDTH)
	{
		y = 0;
		while (y < WINDOW_HEIGHT / 2)
		{
			my_mlx_pixel_put(&exec, x, y, 0x00FFFFFF);
			y++;
		}
		x++;
	}
	my_mlx_pixel_put(&exec, (WINDOW_WIDTH / 2) - 5, (WINDOW_HEIGHT / 4) + 0, 0x00FF0000);
	my_mlx_pixel_put(&exec, (WINDOW_WIDTH / 2) + 0, (WINDOW_HEIGHT / 4) + 0, 0x0000FF00);
	my_mlx_pixel_put(&exec, (WINDOW_WIDTH / 2) + 5, (WINDOW_HEIGHT / 4) + 0, 0x000000FF);
	mlx_put_image_to_window(exec.mlx, exec.win, exec.img, 0, 0);
	mlx_loop(exec.mlx);
}
