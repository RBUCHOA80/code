/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:47:03 by ruchoa            #+#    #+#             */
/*   Updated: 2023/06/03 22:00:31 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	ft_init(t_data *exec)
{
	int		bits_per_pixel;
	int		line_length;
	int		endian;

	exec->mlx = mlx_init();
	exec->win = mlx_new_window(exec->mlx, WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITTLE);
	exec->img = mlx_new_image(exec->mlx, WINDOW_WIDTH, WINDOW_HEIGHT);
	exec->buf = mlx_get_data_addr(exec->img, &bits_per_pixel, &line_length, &endian);
	exec->palette = ft_calloc((MAX_ITERATIONS + 1), sizeof(int));
	exec->set = MANDELBROT;
}
