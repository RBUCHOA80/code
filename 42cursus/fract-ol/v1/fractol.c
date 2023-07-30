/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 23:26:49 by ruchoa            #+#    #+#             */
/*   Updated: 2023/07/29 21:30:43 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol.h"

void	ft_msg(void)
{
	ft_printf("Incorrect fract-ol's name or number of parameters.\n");
	ft_printf("\tValid options:\n");
	ft_printf("\t\t./fractol m -> for Mandelbrot fract-ol Set\n");
	ft_printf("\t\t./fractol j -> for Julia fract-ol Set Type 1\n");
	ft_printf("\t\t./fractol j 2 -> for Julia fract-ol Set Type 2\n");
	ft_printf("\t\t./fractol b -> for Burning Ship fract-ol Set\n");
	ft_printf("\t\t./fractol t -> for Tricorn fract-ol Set\n");
	exit(1);
}

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
		exec->set = argv[1][0];
	}
	else if (argc == 3 && !ft_strncmp(argv[1], "j", 2))
	{
		if (ft_strncmp(argv[2], "2", 2))
			ft_msg();
		exec->set = 2;
	}
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
