/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_uint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:52:36 by jmenezes          #+#    #+#             */
/*   Updated: 2022/08/28 00:17:36 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"
#include "libft.h"
#include <stdlib.h>

int	cnt_leading_spaces(t_conversion *conv, int nbrlen);
int	cnt_leading_zeroes(t_conversion *conv, int nbrlen, int digitslen);
int	cnt_trailing_spaces(t_conversion *conv, int nbrlen);

int	convert_uint(t_conversion *conv, unsigned int u)
{
	char	*digits;
	int		convlen;
	int		digitslen;
	int		nbrlen;
	int		zeroescnt;

	if (conv->flag_period && conv->precision == 0 && u == 0)
		digits = ft_calloc(1, 1);
	else
		digits = ft_utoa_base(u, BASESET_DEC);
	if (digits == NULL)
		return (-1);
	digitslen = (int)ft_strlen(digits);
	zeroescnt = cnt_leading_zeroes(conv, digitslen, digitslen);
	nbrlen = digitslen + zeroescnt;
	convlen = (int)ft_putnchars(' ', cnt_leading_spaces(conv, nbrlen));
	convlen += (int)ft_putnchars('0', zeroescnt);
	convlen += (int)ft_putstr(digits);
	free(digits);
	convlen += (int)ft_putnchars(' ', cnt_trailing_spaces(conv, nbrlen));
	return (convlen);
}
