/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_msg_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 19:38:49 by ruchoa            #+#    #+#             */
/*   Updated: 2023/08/01 19:40:25 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./fractol_bonus.h"

void	ft_msg(void)
{
	ft_printf("Incorrect fract-ol's name or number of parameters.\n");
	ft_printf("\tValid options:\n");
	ft_printf("\t\t./fractol m -> for Mandelbrot fract-ol Set\n");
	ft_printf("\t\t./fractol j -> for Julia fract-ol Set Type 1\n");
	ft_printf("\t\t./fractol j 2 -> for Julia fract-ol Set Type 2\n");
	exit(1);
}
