/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:32:16 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/25 23:52:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	integer_output(va_list var, int fd)
{
	int	integer;
	int	res;

	integer = va_arg(var, int);
	ft_putnbr_fd(integer, fd);
	res = ft_count(integer, BASE_DEC);
	if (integer < 0)
		res += 1;
	return (res);
}
