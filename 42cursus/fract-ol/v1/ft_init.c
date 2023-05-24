/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:47:03 by ruchoa            #+#    #+#             */
/*   Updated: 2023/05/24 20:11:47 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	ft_init(t_data *exec)
{
	exec->mlx = mlx_init();
	exec->win = mlx_new_window(exec->mlx, WINDOW_WIDTH, WINDOW_HEIGHT, WINDOW_TITTLE);
	exec->img = mlx_new_image(exec->mlx, WINDOW_WIDTH, WINDOW_HEIGHT);
	exec->addr = mlx_get_data_addr(exec->img, &exec->bits_per_pixel, &exec->line_length, &exec->endian);
	return (EXIT_FAILURE);
}
