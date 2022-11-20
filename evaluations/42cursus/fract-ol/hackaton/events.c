/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorreia <gcorreia@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 11:16:33 by gcorreia          #+#    #+#             */
/*   Updated: 2022/10/16 14:59:35 by gcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <stdio.h>

static void	reset_render(t_render *render)
{
	render->center.r = 0;
	render->center.i = 0;
	render->unit = 3.0 / WIN_SIZE;
	render->max_iterations = 200;
}

int	handle_keypress(int keycode, t_info *info)
{
	if (keycode == ESC)
	{
		free(info->render->color);
		mlx_destroy_window(info->vars->mlx, info->vars->win);
		exit(0);
	}
	else if (keycode == ONE)
	{
		ft_strlcpy(info->render->type, "julia", 6);
		info->render->constant.r = -0.54;
		info->render->constant.i = 0.54;
		reset_render(info->render);
	}
	else if (keycode == TWO)
	{
		ft_strlcpy(info->render->type, "julia", 6);
		info->render->constant.r = 0.285;
		info->render->constant.i = -0.01;
		reset_render(info->render);
	}
	else if (keycode == THREE)
	{
		ft_strlcpy(info->render->type, "julia", 6);
		info->render->constant.r = 0.37;
		info->render->constant.i = -0.1;
		reset_render(info->render);
	}
	else if (keycode == FOUR)
	{
		ft_strlcpy(info->render->type, "mandelbrot", 11);
		reset_render(info->render);
	}
	else if (keycode == PLUS && info->render->unit > 0.00000000000001)
	{
		if (info->render->max_iterations < 700)
			info->render->max_iterations += 20;
	}
	else if (keycode == MINUS && info->render->unit > 0.00000000000001)
	{
		if (info->render->max_iterations > 100)
			info->render->max_iterations -= 20;
	}
	info->render->printed = 0;
	return (0);
}

static void	update_center(t_render *render, int x, int y, complx point)
{
	complx	center;
	if (x < WIN_SIZE / 2 && (point.r > render->center.r || point.r < render->center.r))
		center.r = point.r + (WIN_SIZE / 2 - x) * render->unit;
	else if (x > WIN_SIZE / 2 && (point.r > render->center.r || point.r < render->center.r))
		center.r = point.r - (x - WIN_SIZE / 2) * render->unit;
	else
		center.r = point.r;
	if (y < WIN_SIZE / 2 && (point.i > render->center.i || point.i < render->center.i))
		center.i = point.i - (WIN_SIZE / 2 - y) * render->unit;
	else if (y > WIN_SIZE / 2 && (point.i > render->center.i || point.i < render->center.i))
		center.i = point.i + (y - WIN_SIZE / 2) * render->unit;
	else
		center.i = point.i;
	render->center = center;
}

int	handle_mouse(int button, int x, int y, t_render *render)
{
	complx	start;
	complx	point;

	if (button == SCRLDWN)
	{
		start = find_start(render->center, render->unit, WIN_SIZE);
		point.r = start.r + x * render->unit;
		point.i = start.i - y * render->unit;
		render->unit *= 1.1;
		update_center(render, x, y, point);
	}
	else if (button == SCRLUP && render->unit > 0.00000000000001)
	{
		start = find_start(render->center, render->unit, WIN_SIZE);
		point.r = start.r + x * render->unit;
		point.i = start.i - y * render->unit;
		render->unit *= 0.9;
		update_center(render, x, y, point);
	}
	render->printed = 0;
	return (0);
}

int	handle_destroy(t_info *info)
{
	free(info->render->color);
	mlx_destroy_window(info->vars->mlx, info->vars->win);
	exit(0);
	return (0);
}
