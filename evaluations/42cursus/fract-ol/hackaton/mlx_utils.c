/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mlx_utils.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorreia <gcorreia@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 16:00:57 by gcorreia          #+#    #+#             */
/*   Updated: 2022/10/16 15:00:23 by gcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	pixel_put(t_img *img, int x, int y, int color)
{
	char	*dst;

	dst = img->addr + (y * img->line_length + x * (img->bits_per_pixel / 8));
	*(unsigned int *)dst = color;
}

void	initialize_image(t_info *info)
{
	info->img->img = mlx_new_image(info->vars->mlx, WIN_SIZE,
			WIN_SIZE);
	info->img->addr = mlx_get_data_addr(info->img->img,
			&info->img->bits_per_pixel, &info->img->line_length,
			&info->img->endian);
}

void	initialize_window(t_info *info)
{
	info->vars->mlx = mlx_init();
	info->vars->win = mlx_new_window(info->vars->mlx, WIN_SIZE, WIN_SIZE,
		  "Fractal");
	mlx_hook(info->vars->win, 2, 1L << 0, handle_keypress, info);
	mlx_hook(info->vars->win, 17, 0L, handle_destroy, info);
	mlx_hook(info->vars->win, 4, 1L << 2, handle_mouse, info->render);
}

static int		**get_pixel_vector()
{
	int	i;
	int	**vector;

	i = 0;
	vector = ft_calloc(WIN_SIZE, sizeof(int *));
	while (i < WIN_SIZE)
	{
		vector[i] = malloc(sizeof(int) * WIN_SIZE);
		i++;
	}
	return (vector);
}

void	initialize_fractal(t_render *render)
{
	render->center.r = 0;
	render->center.i = 0;
	render->max_iterations = 200;
	render->type = ft_strdup("julia");
	render->constant.r = -0.54;
	render->constant.i = 0.54;
	render->unit = 3.0 / WIN_SIZE;
	render->printed = 0;
	render->color = get_color_array(700);
	render->pixel = get_pixel_vector();
}

void	print_pixels(t_info *info)
{
	int	i;
	int j;
	char	*dst;


	i = 0;
	j = 0;
	while (i < WIN_SIZE)
	{
		while (j < WIN_SIZE)
		{
			dst = info->img->addr + (i * info->img->line_length + j * (info->img->bits_per_pixel / 8));
			*(unsigned int *)dst = info->render->pixel[i][j];
			j++;
		}
		j = 0;
		i++;
	}
}
static void	print_instructions(t_info *info)
{
	mlx_string_put(info->vars->mlx, info->vars->win, 0, 10, 0X00FFFFFF, "Keys:      Commands:");
	mlx_string_put(info->vars->mlx, info->vars->win, 0, 30, 0X00FFFFFF, "1          Julia set");
	mlx_string_put(info->vars->mlx, info->vars->win, 0, 50, 0X00FFFFFF, "2          Julia set");
	mlx_string_put(info->vars->mlx, info->vars->win, 0, 70, 0X00FFFFFF, "3          Julia set");
	mlx_string_put(info->vars->mlx, info->vars->win, 0, 90, 0X00FFFFFF, "4          Mandelbrot");
	mlx_string_put(info->vars->mlx, info->vars->win, 0, 110, 0X00FFFFFF, "Scroll     Zoom");
	mlx_string_put(info->vars->mlx, info->vars->win, 0, 130, 0X00FFFFFF, "+ or -     Iterations");
}

int	render_next_frame(t_info *info)
{
	t_img	img;

	if (info->render->printed == 0)
	{
		info->img = &img;
		initialize_image(info);
		draw_fractal(info);
		mlx_put_image_to_window(info->vars->mlx, info->vars->win,
			info->img->img, 0, 0);
		print_instructions(info);
		info->render->printed = 1;
		mlx_destroy_image(info->vars->mlx, info->img->img);
	}
	return (0);
}
