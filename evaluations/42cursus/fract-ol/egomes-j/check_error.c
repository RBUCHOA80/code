/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 12:12:17 by egomes-j          #+#    #+#             */
/*   Updated: 2023/02/04 15:44:06 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	error_msg(void)
{
	write(1, "Try one of these options\n", 25);
	write(1, "./fractol mandelbrot\n", 21);
	write(1, "./fractol julia 1\n", 18);
	write(1, "./fractol julia 2\n", 18);
	exit(0);
}

int	error(int argc, char **argv)
{
	int	val;
	int	i;

	i = 0;
	if (ft_strcmp_fract(argv[1], "julia") == 0 && argc == 3)
	{
		while (argv[2][i])
		{
			if (ft_isdigit_fract(argv[2][i]) == 0)
				error_msg();
			i++;
		}
		val = ft_atoi_fract(argv[2]);
		if (val == 1)
			return (1);
		if (val == 2)
			return (2);
	}
	if (ft_strcmp_fract(argv[1], "mandelbrot") == 0 && argc == 2)
		return (3);
	error_msg();
	return (0);
}
