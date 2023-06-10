/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:33:10 by ruchoa            #+#    #+#             */
/*   Updated: 2023/06/03 21:51:28 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

static void	ft_pixel_color(t_data *exec, int x, int y, int color)
{
	exec->buf[x * 4 + y * WINDOW_WIDTH * 4 + 0] = color >> 0;
	exec->buf[x * 4 + y * WINDOW_WIDTH * 4 + 1] = color >> 8;
	exec->buf[x * 4 + y * WINDOW_WIDTH * 4 + 2] = color >> 16;
	exec->buf[x * 4 + y * WINDOW_WIDTH * 4 + 3] = color >> 24;
}

void	ft_draw(t_data *exec)
{
	int		x;
	int		y;
	int		nbr_iter;
	double	nbr_real;
	double	nbr_imaginary;

	y = -1;
	while (++y < WINDOW_HEIGHT)
	{
		x = -1;
		while (++x < WINDOW_WIDTH)
		{
			nbr_real = 1.0;
			nbr_imaginary = 2.0;
			nbr_iter = ft_check_fractal(exec, nbr_real, nbr_imaginary);
			ft_pixel_color(exec, x, y, exec->palette[nbr_iter]);
		}
	}
	mlx_put_image_to_window(exec->mlx, exec->win, exec->img, 0, 0);
}

/* void	ft_draw(t_data *exec)
{
	int	x;
	int	y;
	
	x = 0;
	while (x < WINDOW_WIDTH)
	{
		y = 0;
		while (y < WINDOW_HEIGHT / 2)
			ft_mlx_pixel_put(exec, x, y++, 0x00FFFFFF);
		x++;
	}
	y = 0;
	while (y < WINDOW_HEIGHT)
	{
		x = y * WINDOW_WIDTH / WINDOW_HEIGHT;
		ft_mlx_pixel_put(exec, x, y++, 0x8b008b);
	}
	y = 0;
	while (y < WINDOW_HEIGHT)
	{
		ft_mlx_pixel_put(exec, x, y, 0x8b008b);
		x = WINDOW_WIDTH - (y * WINDOW_WIDTH / WINDOW_HEIGHT);
		y++;
	}
	ft_mlx_pixel_put(exec, (WINDOW_WIDTH / 2) - 5, (WINDOW_HEIGHT / 4) + 0, 0x00FF0000);
	ft_mlx_pixel_put(exec, (WINDOW_WIDTH / 2) + 0, (WINDOW_HEIGHT / 4) + 0, 0x0000FF00);
	ft_mlx_pixel_put(exec, (WINDOW_WIDTH / 2) + 5, (WINDOW_HEIGHT / 4) + 0, 0x000000FF);
	ft_mlx_pixel_put(exec, (WINDOW_WIDTH / 2) - 5, (WINDOW_HEIGHT * 3 / 4) + 0, 0x00FF0000);
	ft_mlx_pixel_put(exec, (WINDOW_WIDTH / 2) + 0, (WINDOW_HEIGHT * 3 / 4) + 0, 0x0000FF00);
	ft_mlx_pixel_put(exec, (WINDOW_WIDTH / 2) + 5, (WINDOW_HEIGHT * 3 / 4) + 0, 0x000000FF);
	mlx_put_image_to_window(exec->mlx, exec->win, exec->img, 0, 0);
} */
