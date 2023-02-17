/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 20:42:15 by ruchoa            #+#    #+#             */
/*   Updated: 2023/02/16 21:28:50 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	main(void)
{
	t_fractol	exec;

	init_struct(&exec);
	init(&exec);
	render(&exec);
	mlx_hook((&exec)->win, EVENT_CLOSE_BTN, 0, end_fractol, &exec);
	mlx_key_hook((&exec)->win, key_event, &exec);
	mlx_mouse_hook((&exec)->win, mouse_event, &exec);
	mlx_loop((&exec)->mlx);
}
