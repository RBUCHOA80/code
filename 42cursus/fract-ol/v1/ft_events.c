/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_events.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:20:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/05/24 21:06:24 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	ft_events(int keycode, t_data *exec)
{
	if (keycode == KEY_ESC)
		ft_mlx_close(exec);
	else if (keycode == MOUSE_LEFT_BTN)
		ft_printf("Botão Esquerdo\n");
	else if (keycode == MOUSE_MIDDLE_BTN)
		ft_printf("Botão do Meio\n");
	else if (keycode == MOUSE_RIGHT_BTN)
		ft_printf("Botão Direito\n");
	else if (keycode == MOUSE_WHEEL_UP)
		ft_printf("Rodinha pra frente\n");
	else if (keycode == MOUSE_WHEEL_DOWN)
		ft_printf("Rodinha pra trás\n");
	else
		ft_printf("keycode = %i\n", keycode);
	return (EXIT_SUCCESS);
}

int	ft_mlx_close(t_data *exec)
{
	mlx_destroy_image(exec->mlx, exec->img);
	mlx_destroy_window(exec->mlx, exec->win);
	exit (0);
}
