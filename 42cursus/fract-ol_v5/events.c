/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:42:05 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/16 21:22:20 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/* zoom:
*	Zooms the view of the fractal in or out by adjusting
*	the complex number edge values by a zoom multiplier.
*	The fractal can then be generated again at a different resolution,
*	giving the appearance of zooming in or out.
*	If the zoom multiplier is small, like 0.5, the view will
*	zoom in, if it is big, like 2.0, it will zoom out.
*/
static void	zoom(t_fractol *exec, double zoom)
{
	double	center_r;
	double	center_i;

	center_r = exec->min_r - exec->max_r;
	center_i = exec->max_i - exec->min_i;
	exec->max_r = exec->max_r + (center_r - zoom * center_r) / 2;
	exec->min_r = exec->max_r + zoom * center_r;
	exec->min_i = exec->min_i + (center_i - zoom * center_i) / 2;
	exec->max_i = exec->min_i + zoom * center_i;
}

/* move:
*	Moves the view of the fractal by adjusting the complex
*	number edge values a certain distance in a certain direction.
*/
static void	move(t_fractol *exec, double distance, char direction)
{
	double	center_r;
	double	center_i;

	center_r = exec->max_r - exec->min_r;
	center_i = exec->max_i - exec->min_i;
	if (direction == 'R')
	{
		exec->min_r += center_r * distance;
		exec->max_r += center_r * distance;
	}
	else if (direction == 'L')
	{
		exec->min_r -= center_r * distance;
		exec->max_r -= center_r * distance;
	}
	else if (direction == 'D')
	{
		exec->min_i -= center_i * distance;
		exec->max_i -= center_i * distance;
	}
	else if (direction == 'U')
	{
		exec->min_i += center_i * distance;
		exec->max_i += center_i * distance;
	}
}

/* key_event_extend:
*	Handles events from the keyboard keys:
*		- 1, 2, 3, 4, 5: switch fractals
*	This function is registered to an MLX hook and will
*	automatically be called when the user does anything inside the
*	program window with the keyboard.
*	If a valid event is detected, settings are adjusted and the fractal
*	gets redrawn.
*/
static int	key_event_extend(int keycode, t_fractol *mlx)
{
	if (keycode == KEY_ONE && mlx->set != MANDELBROT)
		mlx->set = MANDELBROT;
	else if (keycode == KEY_TWO && mlx->set != JULIA)
		mlx->set = JULIA;
	else if (keycode == KEY_THREE && mlx->set != BURNING_SHIP)
		mlx->set = BURNING_SHIP;
	else if (keycode == KEY_FOUR && mlx->set != TRICORN)
		mlx->set = TRICORN;
	else if (keycode == KEY_FIVE && mlx->set != MANDELBOX)
		mlx->set = MANDELBOX;
	else
		return (1);
	get_complex_layout(mlx);
	render(mlx);
	return (0);
}

/* key_event:
*	Handles events from the keyboard keys:
*		- + or - key: zoom
*		- Arrow keys or WASD: move
*		- Space: color shift
*	This function is registered to an MLX hook and will
*	automatically be called when the user does anything inside the
*	program window with the keyboard.
*	If a valid event is detected, settings are adjusted and the fractal
*	gets redrawn.
*/
int	key_event(int keycode, t_fractol *mlx)
{
	if (keycode == KEY_ESC)
	{
		end_fractol(mlx);
		return (0);
	}
	else if (keycode == KEY_PLUS)
		zoom(mlx, 0.5);
	else if (keycode == KEY_MINUS)
		zoom(mlx, 2);
	else if (keycode == KEY_UP || keycode == KEY_W)
		move(mlx, 0.2, 'U');
	else if (keycode == KEY_DOWN || keycode == KEY_S)
		move(mlx, 0.2, 'D');
	else if (keycode == KEY_LEFT || keycode == KEY_A)
		move(mlx, 0.2, 'L');
	else if (keycode == KEY_RIGHT || keycode == KEY_D)
		move(mlx, 0.2, 'R');
	else if (keycode == KEY_SPACE)
		color_shift(mlx);
	else if (!key_event_extend(keycode, mlx))
		return (1);
	else
		return (1);
	render(mlx);
	return (0);
}

/* mouse_event:
*	Handles events from the mouse:
*		- Mouse wheel: zoom
*		- Left click: Julia shift
*	This function is registered to an MLX hook and will
*	automatically be called when the user does anything inside the
*	program window with the mouse.
*	If a valid event is detected, settings are adjusted and the fractal
*	gets redrawn.
*/
int	mouse_event(int keycode, int x, int y, t_fractol *mlx)
{
	if (keycode == MOUSE_WHEEL_UP)
	{
		zoom(mlx, 0.5);
		x -= WIDTH / 2;
		y -= HEIGHT / 2;
		if (x < 0)
			move(mlx, (double)x * -1 / WIDTH, 'L');
		else if (x > 0)
			move(mlx, (double)x / WIDTH, 'R');
		if (y < 0)
			move(mlx, (double)y * -1 / HEIGHT, 'U');
		else if (y > 0)
			move (mlx, (double)y / HEIGHT, 'D');
	}
	else if (keycode == MOUSE_WHEEL_DOWN)
		zoom(mlx, 2);
	else if (keycode == MOUSE_BTN)
	{
		if (mlx->set == JULIA)
			julia_shift(x, y, mlx);
	}
	else
		return (0);
	render(mlx);
	return (0);
}
