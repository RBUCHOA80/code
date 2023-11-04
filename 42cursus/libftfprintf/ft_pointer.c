/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:32:20 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/03 21:01:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfprintf.h"

int	ft_pointer_output(va_list var, int fd)
{
	unsigned long long	pointer;
	int					len;

	pointer = va_arg(var, unsigned long long);
	if (!pointer)
	{
		len = ft_strlength(PTR_ERROR);
		write(fd, PTR_ERROR, len);
		return (len);
	}
	write(fd, "0x", 2);
	ft_puthex_fd(pointer, fd);
	if (pointer == 0)
		return (1);
	len = 0;
	while (pointer)
	{
		pointer = (pointer / BASE_HEX);
		len++;
	}
	return (len + 2);
}
