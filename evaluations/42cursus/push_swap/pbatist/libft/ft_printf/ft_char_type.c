/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_type.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:20:39 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:20:40 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "ft_printf.h"

int	char_output(va_list ap)
{
	char	place_holder;

	place_holder = (va_arg(ap, int));
	ft_putchar_fd(place_holder, 1);
	return (1);
}
