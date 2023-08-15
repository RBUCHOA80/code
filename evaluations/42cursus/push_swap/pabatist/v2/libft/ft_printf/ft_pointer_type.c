/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_type.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:21:10 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:21:11 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "ft_printf.h"

int	pointer_output(va_list ap)
{
	unsigned long int		place_holder;

	place_holder = (va_arg(ap, unsigned long int));
	ft_putstr_fd("0x", 1);
	ft_putnbr_hexadecimal_lowercase_fd(place_holder, 1);
	if (!place_holder)
		return (3);
	return (count_hexa(place_holder) + 2);
}
