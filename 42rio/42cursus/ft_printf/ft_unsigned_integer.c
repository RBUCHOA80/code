/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_integer.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:33:05 by ruchoa            #+#    #+#             */
/*   Updated: 2022/07/12 19:33:06 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	unsigned_integer_output(va_list var, int fd)
{
	unsigned int	unsig_int;
	int				res;

	unsig_int = va_arg(var, unsigned int);
	ft_put_u_nbr_fd(unsig_int, fd);
	res = ft_count(unsig_int, BASE_DEC);
	return (res);
}
