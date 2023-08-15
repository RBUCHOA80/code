/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_type.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:20:59 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:21:00 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "ft_printf.h"

int	integer_output(va_list ap)
{
	int	place_holder;

	place_holder = (va_arg(ap, int));
	ft_putnbr_fd(place_holder, 1);
	if (place_holder < 0)
		return (count_decimal(place_holder) + 1);
	return (count_decimal(place_holder));
}
