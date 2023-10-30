/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upper_fd.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:32:48 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/29 20:58:42 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfprintf.h"

void	ft_puthex_upper_fd(unsigned int nb, int fd)
{
	char	*vhex;

	vhex = "0123456789ABCDEF";
	if (nb < 16)
	{
		write(fd, &(vhex[nb]), 1);
		return ;
	}
	else
		ft_puthex_upper_fd((nb / 16), fd);
	nb = ((nb % 16));
	write(fd, &(vhex[nb]), 1);
}
