/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:32:39 by ruchoa            #+#    #+#             */
/*   Updated: 2022/07/14 09:30:06 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex_fd(unsigned long long nb, int fd)
{
	char	*vhex;

	vhex = "0123456789abcdef";
	if (nb < 16)
	{
		write(fd, &(vhex[nb]), 1);
		return ;
	}
	else
		ft_puthex_fd((nb / 16), fd);
	nb = ((nb % 16));
	write(fd, &(vhex[nb]), 1);
}