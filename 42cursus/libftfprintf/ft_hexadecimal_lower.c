/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_lower.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:32:07 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/03 21:01:16 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfprintf.h"

int	ft_hexadecimal_lower_output(va_list var, int fd)
{
	unsigned int	low_hex;
	int				res;

	low_hex = va_arg(var, unsigned int);
	ft_puthex_low_fd(low_hex, fd);
	res = ft_count(low_hex, BASE_HEX);
	return (res);
}
