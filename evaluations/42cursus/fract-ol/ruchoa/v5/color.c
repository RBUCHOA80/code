/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:41:59 by ruchoa            #+#    #+#             */
/*   Updated: 2023/03/21 19:12:20 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

/* color_shift_special:
*	Extension of the color_shift function. Changes the color pattern.
*	The fractal can then be rendered again with different color
*	effects.
*/
static void	color_shift_special(t_fractol *exec)
{
	int	alt_color;

	if (exec->color == 0xFFFFFF)
		alt_color = 0xCCCCCC;
	else
		alt_color = exec->color;
	if (exec->color_pattern == 5)
		set_color_contrasted(exec, alt_color);
	else if (exec->color_pattern == 6)
		set_color_opposites(exec, exec->color);
	else if (exec->color_pattern == 7)
		set_color_graphic(exec, exec->color);
	else if (exec->color_pattern == 8)
		set_color_multiple(exec, (int [8]){0xFF0000, 0xFF7F00, 0xFFFF00,
			0x00FF00, 0x0000FF, 0x4B0082, 0x9400D3, 0xFFFFFF}, 8);
}

/* color_shift_striped:
*	Extension of the color_shift function. Changes the color pattern.
*	The fractal can then be rendered again with different color
*	effects.
*/
static void	color_shift_striped(t_fractol *exec)
{
	if (exec->color_pattern == 2)
		set_color_zebra(exec, exec->color);
	else if (exec->color_pattern == 3)
		set_color_triad(exec, exec->color);
	else if (exec->color_pattern == 4)
		set_color_tetra(exec, exec->color);
	else
		color_shift_special(exec);
}

/* color_shift:
*	Reinitializes the MLX image and changes the color pattern.
*	The fractal can then be rendered again with different color
*	effects.
*/
void	color_shift(t_fractol *exec)
{
	static int	alt_color;

	exec->color_pattern = (exec->color_pattern + 1) % 9;
	reinit_img(exec);
	if (exec->color_pattern == 0)
		set_color_mono(exec, alt_color);
	else if (exec->color_pattern == 1)
		set_color_multiple(exec, (int [4]){0x000000, alt_color,
			get_percent_color(exec->color, 50), 0xFFFFFF}, 4);
	else
		color_shift_striped(exec);
}
