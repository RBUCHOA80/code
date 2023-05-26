/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pixel_color.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 20:57:49 by ruchoa            #+#    #+#             */
/*   Updated: 2023/05/25 22:10:11 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	ft_pixel_color(t_data *exec, int x, int y, int color)
{
	exec->buf[x * 4 + y * WINDOW_WIDTH * 4 + 0] = color >> 0;
	exec->buf[x * 4 + y * WINDOW_WIDTH * 4 + 1] = color >> 8;
	exec->buf[x * 4 + y * WINDOW_WIDTH * 4 + 2] = color >> 16;
	exec->buf[x * 4 + y * WINDOW_WIDTH * 4 + 3] = color >> 24;
}
