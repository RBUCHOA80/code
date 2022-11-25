/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorreia <gcorreia@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:47:16 by gcorreia          #+#    #+#             */
/*   Updated: 2022/10/16 13:28:40 by gcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"
#include <stdio.h>

complx	find_start(complx center, double unit, int win_size)
{
	complx	start;

	start.r = center.r - unit * win_size / 2;
	start.i = center.i + unit * win_size / 2;
	return (start);
}

int	fractal_iteration(complx z, complx c, int limit)
{
	int		i;
	complx	temp;

	temp = z;
	i = 0;
	while (i < limit)
	{
		if ((z.r * z.r) + (z.i * z.i) > 4)
			break ;
		temp.r = (z.r * z.r - z.i * z.i) + c.r;
		temp.i = (2 * z.r * z.i) + c.i;
		z = temp;
		i++;
	}
	return (i);
}

void	print_julia(complx point, t_info *info)
{
	int	i;
	int	j;
	int	iterations;
	complx	z;
	complx	c;
	complx	temp;

	point = info->render->start;
	i = 0;
	j = 0;
	c = info->render->constant;
	while (i < WIN_SIZE)
	{
		while (j < WIN_SIZE)
		{
			temp = z = point;
			while (iterations < info->render->max_iterations)
			{
				if ((z.r * z.r) + (z.i * z.i) > 4)
				   break ;
				temp.r = (z.r *z.r - z.i * z.i) + c.r;
				temp.i = (2 * z.r * z.i) + c.i;
				z = temp;
				iterations++;
			}
			if (iterations == info->render->max_iterations)
				info->render->pixel[i][j] = 0;
			else
				info->render->pixel[i][j] = info->render->color[iterations];
//			iterations = fractal_iteration(point, info->render->constant,
//					info->render->max_iterations);
//			pixel_put(info->img, j, i, info->render->color[iterations]);
			point.r += info->render->unit;
			iterations = 0;
			j++;
		}
		j = 0;
		point.r = info->render->start.r;
		point.i -= info->render->unit;
		i++;
	}
	print_pixels(info);
}

void	print_mandelbrot(t_info *info)
{
	int		i;
	int		j;
	int		iterations;
	complx	zero;
	complx	z;
	complx	c;
	complx	temp;

	zero.r = 0;
	zero.i = 0;
	info->render->constant = info->render->start;
	i = 0;
	j = 0;
	while (i < WIN_SIZE)
	{
		while (j < WIN_SIZE)
		{
			c = info->render->constant;
			z = temp = zero;
			iterations = 0;
			while (iterations < info->render->max_iterations)
			{
				if ((z.r * z.r) + (z.i * z.i) > 4)
					break ;
				temp.r = (z.r * z.r - z.i * z.i) + c.r;
				temp.i = (2 * z.r * z.i) + c.i;
				z = temp;
				iterations++;
			}
			if (iterations == info->render->max_iterations)
				info->render->pixel[i][j] = 0;
			else
				info->render->pixel[i][j] = info->render->color[iterations];
//			iterations = fractal_iteration(zero, info->render->constant,
//					info->render->max_iterations);
//			pixel_put(info->img, j, i, info->render->color[iterations]);
			info->render->constant.r += info->render->unit;
			j++;
		}
		j = 0;
		info->render->constant.r = info->render->start.r;
		info->render->constant.i -= info->render->unit;
		i++;
	}
	print_pixels(info);
}

void	draw_fractal(t_info *info)
{
	info->render->start = find_start(info->render->center, info->render->unit, WIN_SIZE);
	if (!ft_strncmp(info->render->type, "mandelbrot", 10))
		print_mandelbrot(info);
	else if (!ft_strncmp(info->render->type, "julia", 5))
		print_julia(info->render->start, info);
}
