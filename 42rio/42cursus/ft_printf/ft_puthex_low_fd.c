/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:32:44 by ruchoa            #+#    #+#             */
/*   Updated: 2022/07/14 09:28:55 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_low_fd(unsigned int nb, int fd)
{
	char	*vhex;

	vhex = "0123456789abcdef";
	if (nb < 16)
	{
		write(fd, &(vhex[nb]), 1);
		return ;
	}
	else
		ft_puthex_low_fd((nb / 16), fd);
	nb = ((nb % 16));
	write(fd, &(vhex[nb]), 1);
}
