/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 19:27:14 by ruchoa            #+#    #+#             */
/*   Updated: 2023/05/24 20:02:37 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

int	ft_hooks(t_data *exec)
{
	mlx_hook(exec->win, ON_KEYUP, 3, &ft_events, exec);
	mlx_hook(exec->win, ON_DESTROY, 0, &ft_mlx_close, exec);
	mlx_hook(exec->win, ON_DESTROY, 0, &ft_mlx_close, exec);
	return (EXIT_SUCCESS);
}
