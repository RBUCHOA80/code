/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_events.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:20:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/05/24 21:46:14 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	ft_key_events(int keycode, t_data *exec)
{
	if (keycode == KEY_ESC)
		ft_mlx_close(exec);
	else
		ft_printf("keycode = %i\n", keycode);
	return (EXIT_SUCCESS);
}

int	ft_mouse_events(int keycode, int x, int y, t_data *exec)
{
	(void)exec;
	if (keycode == MOUSE_LEFT_BTN)
		ft_printf("Botão Esquerdo\t| ");
	else if (keycode == MOUSE_MIDDLE_BTN)
		ft_printf("Botão do Meio\t| ");
	else if (keycode == MOUSE_RIGHT_BTN)
		ft_printf("Botão Direito\t| ");
	else if (keycode == MOUSE_WHEEL_UP)
		ft_printf("Roda pra frente\t| ");
	else if (keycode == MOUSE_WHEEL_DOWN)
		ft_printf("Roda pra trás\t| ");
	ft_printf("x = %i | ", x);
	ft_printf("y = %i\n", y);
	return (EXIT_SUCCESS);
}

int	ft_mlx_close(t_data *exec)
{
	mlx_destroy_image(exec->mlx, exec->img);
	mlx_destroy_window(exec->mlx, exec->win);
	exit (0);
}
