/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_upper.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:32:12 by ruchoa            #+#    #+#             */
/*   Updated: 2022/11/15 18:35:25 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	hexadecimal_upper_output(va_list var, int fd)
{
	unsigned int	upper_hex;
	int				res;

	upper_hex = va_arg(var, int);
	ft_puthex_upper_fd(upper_hex, fd);
	res = ft_count(upper_hex, BASE_HEX);
	return (res);
}
