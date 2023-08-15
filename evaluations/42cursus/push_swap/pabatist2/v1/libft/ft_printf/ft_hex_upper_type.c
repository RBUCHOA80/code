/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex_upper_type.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:20:53 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:20:54 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "ft_printf.h"

int	hexadecimal_uppercase_output(va_list ap)
{
	unsigned int	place_holder;

	place_holder = (va_arg(ap, unsigned int));
	ft_putnbr_hexadecimal_uppercase_fd(place_holder, 1);
	return (count_hexa(place_holder));
}
