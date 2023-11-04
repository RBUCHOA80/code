/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:32:02 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/03 21:01:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfprintf.h"

int	ft_decimal_output(va_list var, int fd)
{
	int	decimal;
	int	res;	

	decimal = va_arg(var, int);
	ft_putnumber_fd(decimal, fd);
	res = ft_count(decimal, BASE_DEC);
	if (decimal < 0)
		res += 1;
	return (res);
}
