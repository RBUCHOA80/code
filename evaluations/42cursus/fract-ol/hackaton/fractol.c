/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcorreia <gcorreia@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 12:30:54 by gcorreia          #+#    #+#             */
/*   Updated: 2022/10/14 20:07:29 by gcorreia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main()
{
	t_vars		vars;
	t_render	render;
	t_info		info;

	info.vars = &vars;
	info.render = &render;
	initialize_fractal(info.render);
	initialize_window(&info);
	mlx_loop_hook(vars.mlx, render_next_frame, &info);
	mlx_loop(vars.mlx);
}
