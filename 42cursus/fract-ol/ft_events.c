/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_events.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:20:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/30 14:16:55 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	ft_hooks(t_data *exec)
{
	mlx_key_hook(exec->win, &ft_key_events, exec);
	mlx_mouse_hook(exec->win, &ft_mouse_events, exec);
	mlx_hook(exec->win, 17, 0, &ft_close, exec);
	return (EXIT_SUCCESS);
}

int	ft_key_events(int keycode, t_data *exec)
{
	if (keycode == KEY_ESC)
		ft_close(exec);
	ft_change_set(keycode, exec);
	ft_draw(exec);
	return (EXIT_SUCCESS);
}

void	ft_change_set(int keycode, t_data *exec)
{
	if (keycode == KEY_ONE)
	{
		exec->set = MANDELBROT;
		ft_window_limits(exec);
	}
	else if (keycode == KEY_TWO)
	{
		exec->set = JULIA;
		ft_window_limits(exec);
	}
}

int	ft_mouse_events(int keycode, int x, int y, t_data *exec)
{
	if (keycode == MOUSE_WHEEL_UP)
		ft_zoom(exec, 0.5);
	else if (keycode == MOUSE_WHEEL_DOWN)
		ft_zoom(exec, 1.5);
	else if (keycode == MOUSE_LEFT_BTN)
	{
		if (exec->set == JULIA)
			ft_julia_shift(x, y, exec);
	}
	else
		return (0);
	ft_draw(exec);
	return (EXIT_SUCCESS);
}
