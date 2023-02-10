/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_trgb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 07:34:01 by ruchoa            #+#    #+#             */
/*   Updated: 2023/01/08 09:28:21 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	create_trgb(int t, int r, int g, int b)
{
	return (t << 24 | r << 16 | g << 8 | b);
}

int	main(void)
{
	int	t;
	int	r;
	int	g;
	int	b;
	int	hex;

	t = 0;
	r = 139;
	g = 0;
	b = 139;
	hex = create_trgb(t, r, g, b);
	ft_printf("hex = 0x%x\n", hex);
	ft_printf("dec = %i\n", hex);
	return (0);
}

/*
gcc create_trgb.c -I ../libftprintf/ -L ../libftprintf/ -lftprintf -o a.out
./a.out
rm a.out
 */
