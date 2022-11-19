/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:47:37 by jmenezes          #+#    #+#             */
/*   Updated: 2022/08/28 00:17:52 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"
#include "libft.h"
#include <stdlib.h>

int	cnt_leading_spaces(t_conversion *conv, int nbrlen);
int	cnt_leading_zeroes(t_conversion *conv, int nbrlen, int digitslen);
int	cnt_trailing_spaces(t_conversion *conv, int nbrlen);

static char	*get_digits(t_conversion *conv, int n)
{
	if (conv->flag_period && conv->precision == 0 && n == 0)
		return (ft_calloc(1, 1));
	return (ft_utoa_base((unsigned int)ft_abs(n), BASESET_DEC));
}

int	convert_int(t_conversion *conv, int n)
{
	char	*digits;
	int		convlen;
	int		nbrlen;
	int		zeroescnt;

	digits = get_digits(conv, n);
	if (digits == NULL)
		return (-1);
	nbrlen = (int)ft_strlen(digits);
	if (n < 0 || conv->flag_plus || conv->flag_space)
		nbrlen++;
	zeroescnt = cnt_leading_zeroes(conv, nbrlen, (int)ft_strlen(digits));
	nbrlen += zeroescnt;
	convlen = (int)ft_putnchars(' ', cnt_leading_spaces(conv, nbrlen));
	if (n < 0)
		convlen += (int)ft_putchar('-');
	else if (conv->flag_plus)
		convlen += (int)ft_putchar('+');
	else if (conv->flag_space)
		convlen += (int)ft_putchar(' ');
	convlen += (int)ft_putnchars('0', zeroescnt);
	convlen += (int)ft_putstr(digits);
	free(digits);
	convlen += (int)ft_putnchars(' ', cnt_trailing_spaces(conv, nbrlen));
	return (convlen);
}
