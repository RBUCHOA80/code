/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:26:49 by ruchoa            #+#    #+#             */
/*   Updated: 2023/05/24 20:03:04 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	main(void)
{
	t_data	exec;
	int		x;
	int		y;

	ft_init(&exec);
	ft_hooks(&exec);
	x = 0;
	while (x < WINDOW_WIDTH)
	{
		y = 0;
		while (y < WINDOW_HEIGHT / 2)
			ft_mlx_pixel_put(&exec, x, y++, 0x00FFFFFF);
		x++;
	}
	y = 0;
	while (y < WINDOW_HEIGHT)
	{
		x = y * WINDOW_WIDTH / WINDOW_HEIGHT;
		ft_mlx_pixel_put(&exec, x, y++, 0x8b008b);
	}
	y = 0;
	while (y < WINDOW_HEIGHT)
	{
		ft_mlx_pixel_put(&exec, x, y, 0x8b008b);
		x = WINDOW_WIDTH - (y * WINDOW_WIDTH / WINDOW_HEIGHT);
		y++;
	}
	ft_mlx_pixel_put(&exec, (WINDOW_WIDTH / 2) - 5, (WINDOW_HEIGHT / 4) + 0, 0x00FF0000);
	ft_mlx_pixel_put(&exec, (WINDOW_WIDTH / 2) + 0, (WINDOW_HEIGHT / 4) + 0, 0x0000FF00);
	ft_mlx_pixel_put(&exec, (WINDOW_WIDTH / 2) + 5, (WINDOW_HEIGHT / 4) + 0, 0x000000FF);
	ft_mlx_pixel_put(&exec, (WINDOW_WIDTH / 2) - 5, (WINDOW_HEIGHT * 3 / 4) + 0, 0x00FF0000);
	ft_mlx_pixel_put(&exec, (WINDOW_WIDTH / 2) + 0, (WINDOW_HEIGHT * 3 / 4) + 0, 0x0000FF00);
	ft_mlx_pixel_put(&exec, (WINDOW_WIDTH / 2) + 5, (WINDOW_HEIGHT * 3 / 4) + 0, 0x000000FF);
	mlx_put_image_to_window(exec.mlx, exec.win, exec.img, 0, 0);
	mlx_loop(exec.mlx);
}
