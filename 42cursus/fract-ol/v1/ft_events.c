/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_events.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:20:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/29 19:13:57 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	ft_key_events(int keycode, t_data *exec)
{
	if (keycode == KEY_ESC)
		ft_close(exec);
	else if (keycode == KEY_PLUS)
		ft_zoom(exec, 0.5);
	else if (keycode == KEY_MINUS)
		ft_zoom(exec, 2.0);
	else if (keycode == KEY_LEFT || keycode == KEY_A)
		ft_move(exec, 0.05, 'L');
	else if (keycode == KEY_RIGHT || keycode == KEY_D)
		ft_move(exec, 0.05, 'R');
	else if (keycode == KEY_UP || keycode == KEY_W)
		ft_move(exec, 0.05, 'U');
	else if (keycode == KEY_DOWN || keycode == KEY_S)
		ft_move(exec, 0.05, 'D');
	else if (keycode == KEY_SPACE)
		ft_set_color(exec);
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
	else if (keycode == KEY_THREE)
	{
		exec->set = BURNING_SHIP;
		ft_window_limits(exec);
	}
	else if (keycode == KEY_FOUR)
	{
		exec->set = TRICORN;
		ft_window_limits(exec);
	}
}

int	ft_mouse_events(int keycode, int x, int y, t_data *exec)
{
	if (keycode == MOUSE_WHEEL_UP)
	{
		ft_zoom(exec, 0.5);
		x -= WINDOW_WIDTH / 2;
		y -= WINDOW_HEIGHT / 2;
		if (x < 0)
			ft_move(exec, ((double)x * -1 / WINDOW_WIDTH), 'L');
		else if (x > 0)
			ft_move(exec, ((double)x * +1 / WINDOW_WIDTH), 'R');
		if (y < 0)
			ft_move(exec, ((double)y * -1 / WINDOW_HEIGHT), 'U');
		else if (y > 0)
			ft_move(exec, ((double)y * +1 / WINDOW_HEIGHT), 'D');
	}
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
