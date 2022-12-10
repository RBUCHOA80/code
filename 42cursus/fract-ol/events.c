/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:20:41 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/09 21:25:32 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	events(int keycode, t_data *exec)
{
	if (keycode == 53)
		close(exec);
	else
		print_keycode(keycode);
	return (0);
}

void	close(t_data *exec)
{
	mlx_destroy_image(exec->mlx, exec->img);
	mlx_destroy_window(exec->mlx, exec->win);
	exit (0);
}

int	x_close(int keycode, t_data *exec)
{
	(void)keycode;
	mlx_destroy_display(exec->mlx);
	mlx_destroy_image(exec->mlx, exec->img);
	mlx_destroy_window(exec->mlx, exec->win);
	exit (0);
}

void	print_keycode(int keycode)
{
	printf("keycode = %i\n", keycode);
}
