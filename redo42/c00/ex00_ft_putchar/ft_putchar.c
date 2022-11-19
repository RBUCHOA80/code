/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 18:05:12 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/21 22:57:59 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	ft_putchar(0b01100001);
	write(1, "\n", 1);
	ft_putchar(0142);
	write(1, "\n", 1);
	ft_putchar(99);
	write(1, "\n", 1);
	ft_putchar(0x64);
	write(1, "\n", 1);
	ft_putchar('e');
	write(1, "\n", 1);
	return (0);
}
