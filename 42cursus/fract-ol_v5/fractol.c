/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:42:15 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/13 21:00:27 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	main(void)
{
	t_fractol	f;

	init_struct(&f);
	init(&f);
	render(&f);
	mlx_hook(f.win, EVENT_CLOSE_BTN, 0, end_fractol, &f);
	mlx_key_hook(f.win, key_event, &f);
	mlx_mouse_hook(f.win, mouse_event, &f);
	mlx_loop(f.mlx);
}
