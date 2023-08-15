/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned_type.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:21:42 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:21:43 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "ft_printf.h"

int	unsigned_decimal_output(va_list ap)
{
	unsigned int	place_holder;

	place_holder = (va_arg(ap, unsigned int));
	ft_putnbr_fd(place_holder, 1);
	return (count_decimal(place_holder));
}
