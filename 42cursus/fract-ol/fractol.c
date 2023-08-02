/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:26:49 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/02 20:53:04 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	ft_check_args(int argc, char **argv, t_data *exec)
{
	if (argc == 2)
	{
		if (!ft_strncmp(argv[1], "m", 2))
			exec->set = MANDELBROT;
		else
			ft_msg();
	}
	else if (argc == 4)
	{
		if (ft_strncmp(argv[2], "j", 2))
		{
			exec->set = JULIA;
			exec->start_const_x = ft_atof(argv[2]);
			exec->start_const_y = ft_atof(argv[3]);
		}
		else
			ft_msg();
	}
	else
		ft_msg();
}

int	main(int argc, char **argv)
{
	t_data	exec;

	exec.start_const_x = -0.835;
	exec.start_const_y = -0.2321;
	ft_check_args(argc, argv, &exec);
	ft_init(&exec);
	ft_hooks(&exec);
	ft_draw(&exec);
	mlx_loop(exec.mlx);
}
