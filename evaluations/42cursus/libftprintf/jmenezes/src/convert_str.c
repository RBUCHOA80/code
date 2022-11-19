/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:49:36 by jmenezes          #+#    #+#             */
/*   Updated: 2022/08/28 00:17:31 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"
#include "libft.h"

int	convert_str(t_conversion *conv, char *str)
{
	int	convlen;
	int	slen;
	int	spacescnt;

	slen = 0;
	if (conv->flag_period)
		while (str[slen] != '\0' && slen < conv->precision)
			slen++;
	else
		slen = (int)ft_strlen(str);
	spacescnt = 0;
	if (conv->min_width > slen)
		spacescnt = conv->min_width - slen;
	convlen = 0;
	if (!conv->flag_minus)
		convlen += (int)ft_putnchars(' ', spacescnt);
	convlen += (int)ft_putnstr(str, (size_t)slen);
	if (conv->flag_minus)
		convlen += (int)ft_putnchars(' ', spacescnt);
	return (convlen);
}
