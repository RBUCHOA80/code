/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_hex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:36:00 by jmenezes          #+#    #+#             */
/*   Updated: 2022/09/17 14:26:32 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"
#include "libft.h"
#include <stdlib.h>

int	cnt_leading_spaces(t_conversion *conv, int nbrlen);
int	cnt_leading_zeroes(t_conversion *conv, int nbrlen, int digitslen);
int	cnt_trailing_spaces(t_conversion *conv, int nbrlen);

static char	*get_digits(t_conversion *conv, unsigned int u)
{
	if (conv->flag_period && conv->precision == 0 && u == 0)
		return (ft_calloc(1, 1));
	if (conv->specifier == 'x')
		return (ft_utoa_base(u, BASESET_HEXL));
	return (ft_utoa_base(u, BASESET_HEXU));
}

int	convert_hex(t_conversion *conv, unsigned int u)
{
	char	*digits;
	int		convlen;
	int		nbrlen;
	int		zcnt;

	digits = get_digits(conv, u);
	if (digits == NULL)
		return (-1);
	nbrlen = (int)ft_strlen(digits);
	if (conv->flag_hash && nbrlen > 0)
		nbrlen += 2;
	zcnt = cnt_leading_zeroes(conv, nbrlen, (int)ft_strlen(digits));
	convlen = (int)ft_putnchars(' ', cnt_leading_spaces(conv, nbrlen + zcnt));
	if (conv->flag_hash && nbrlen > 0)
	{
		if (conv->specifier == 'x')
			convlen += (int)ft_putstr("0x");
		else
			convlen += (int)ft_putstr("0X");
	}
	convlen += (int)ft_putnchars('0', zcnt);
	convlen += (int)ft_putstr(digits);
	free(digits);
	convlen += (int)ft_putnchars(' ', cnt_trailing_spaces(conv, nbrlen + zcnt));
	return (convlen);
}
