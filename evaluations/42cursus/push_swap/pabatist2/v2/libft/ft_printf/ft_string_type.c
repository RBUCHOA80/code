/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string_type.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:21:35 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:21:36 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "ft_printf.h"

int	string_output(va_list ap)
{
	char	*place_holder;

	place_holder = (va_arg(ap, char *));
	if (!place_holder)
	{
		ft_putstr_fd("(null)", 1);
		return (6);
	}
	ft_putstr_fd(place_holder, 1);
	return (ft_strlen(place_holder));
}
