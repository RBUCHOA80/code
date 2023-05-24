/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_events.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 17:20:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/05/24 20:15:14 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	ft_events(int keycode, t_data *exec)
{
	if (keycode == KEY_ESC || keycode == X_BTN)
		ft_mlx_close(exec);
	else
		ft_print_keycode(keycode);
	return (EXIT_SUCCESS);
}

int	ft_mlx_close(t_data *exec)
{
	
	mlx_destroy_image(exec->mlx, exec->img);
	mlx_destroy_window(exec->mlx, exec->win);
	exit (0);
}

void	ft_print_keycode(int keycode)
{
	ft_printf("keycode = %i\n", keycode);
}
