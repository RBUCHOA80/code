/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msg_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:38:49 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/02 23:53:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol_bonus.h"

void	ft_msg(void)
{
	ft_printf("Incorrect fract-ol's set or number of parameters.\n");
	ft_printf("\tValid options:\n");
	ft_printf("\t\t./fractol_bonus m -> for Mandelbrot fract-ol Set\n");
	ft_printf("\t\t./fractol_bonus b -> for Burning Ship fract-ol Set\n");
	ft_printf("\t\t./fractol_bonus t -> for Tricorn fract-ol Set\n");
	ft_printf("\t\t./fractol_bonus j -> for Julia fract-ol Preset\n");
	ft_printf("\t\t./fractol_bonus j x.x y.y -> for Julia fract-ol Set\n");
	exit(1);
}
