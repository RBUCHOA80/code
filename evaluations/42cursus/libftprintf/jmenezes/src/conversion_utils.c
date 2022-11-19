/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conversion_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:52:58 by jmenezes          #+#    #+#             */
/*   Updated: 2022/08/20 18:55:22 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"
#include <stdlib.h>

int	cnt_leading_spaces(t_conversion *conv, int nbrlen)
{
	if (conv->min_width > nbrlen
		&& !conv->flag_minus
		&& (!conv->flag_zero || conv->flag_period))
		return (conv->min_width - nbrlen);
	return (0);
}

int	cnt_leading_zeroes(t_conversion *conv, int nbrlen, int digitslen)
{
	if (conv->min_width > nbrlen
		&& conv->flag_zero
		&& !conv->flag_period
		&& !conv->flag_minus)
		return (conv->min_width - nbrlen);
	else if (conv->flag_period
		&& conv->precision > digitslen)
		return (conv->precision - digitslen);
	return (0);
}

int	cnt_trailing_spaces(t_conversion *conv, int nbrlen)
{
	if (conv->flag_minus && conv->min_width > nbrlen)
		return (conv->min_width - nbrlen);
	return (0);
}

t_conversion	*new_conversion(void)
{
	t_conversion	*conv;

	conv = malloc(sizeof(t_conversion));
	if (conv != NULL)
	{
		conv->specifier = '\0';
		conv->precision = 0;
		conv->min_width = 0;
		conv->flag_hash = 0;
		conv->flag_zero = 0;
		conv->flag_minus = 0;
		conv->flag_space = 0;
		conv->flag_plus = 0;
		conv->flag_period = 0;
	}
	return (conv);
}
