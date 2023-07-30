/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:57:34 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/30 14:34:50 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	ft_set_pixel_color(t_data *exec, int x, int y, int color)
{
	exec->pixels[x * 4 + y * WINDOW_WIDTH * 4 + 0] = color >> 0;
	exec->pixels[x * 4 + y * WINDOW_WIDTH * 4 + 1] = color >> 8;
	exec->pixels[x * 4 + y * WINDOW_WIDTH * 4 + 2] = color >> 16;
	exec->pixels[x * 4 + y * WINDOW_WIDTH * 4 + 3] = color >> 24;
}

int	ft_interpolate(int startcolor, int endcolor, double fraction)
{
	int	start_rgb[3];
	int	end_rgb[3];

	start_rgb[0] = ((startcolor >> 16) & 0xFF);
	start_rgb[1] = ((startcolor >> 8) & 0xFF);
	start_rgb[2] = ((startcolor >> 0) & 0xFF);
	end_rgb[0] = ((endcolor >> 16) & 0xFF);
	end_rgb[1] = ((endcolor >> 8) & 0xFF);
	end_rgb[2] = ((endcolor >> 0) & 0xFF);
	start_rgb[0] = (end_rgb[0] - start_rgb[0]) * fraction + start_rgb[0];
	start_rgb[1] = (end_rgb[1] - start_rgb[1]) * fraction + start_rgb[1];
	start_rgb[2] = (end_rgb[2] - start_rgb[2]) * fraction + start_rgb[2];
	return (0xFF << 24 | start_rgb[0] << 16 | start_rgb[1] << 8 | start_rgb[2]);
}

void	ft_change_color(t_data *f, int color)
{
	int		i;
	int		j;
	double	fraction;
	int		color1;
	int		color2;

	color1 = 0x00613c;
	color2 = color;
	i = 0;
	while (i < MAX_ITERATIONS)
	{
		j = 0;
		while (j < MAX_ITERATIONS / 2)
		{
			fraction = (double)j / (MAX_ITERATIONS * 2);
			f->color_table[i + j] = ft_interpolate(color1, color2, fraction);
			j++;
		}
		color1 = color2;
		color2 = 0x00613c;
		i += j;
	}
	f->color_table[MAX_ITERATIONS -1] = 0;
}

void	ft_set_color(t_data *exec)
{
	if (exec->color == 0)
	{
		ft_change_color(exec, 0x333333);
		exec->color = 1;
	}
	else
	{
		ft_change_color(exec, 0x666666);
		exec->color = 0;
	}
}
