/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:26:49 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/01 19:40:01 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol_bonus.h"

void	ft_check_args(int argc, char **argv, t_data *exec)
{
	if (argc != 2 && argc != 3)
		ft_msg();
	else if (argc == 2)
	{
		if (ft_strncmp(argv[1], "m", 2) && \
			ft_strncmp(argv[1], "j", 2) && \
			ft_strncmp(argv[1], "b", 2) && \
			ft_strncmp(argv[1], "t", 2))
			ft_msg();
		exec->type = 1;
	}
	else if (argc == 3 && !ft_strncmp(argv[1], "j", 2))
	{
		if (ft_strncmp(argv[2], "2", 2))
			ft_msg();
		exec->type = 2;
	}
	exec->set = argv[1][0];
}

int	main(int argc, char **argv)
{
	t_data	exec;

	ft_check_args(argc, argv, &exec);
	ft_init(&exec);
	ft_hooks(&exec);
	ft_draw(&exec);
	mlx_loop(exec.mlx);
}
