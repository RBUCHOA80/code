/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 13:35:18 by jmenezes          #+#    #+#             */
/*   Updated: 2022/08/22 11:09:52 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "conversion.h"
#include "libft.h"

int	convert_char(t_conversion *conv, char c)
{
	int	convlen;
	int	spacescnt;

	spacescnt = 0;
	if (conv->min_width > 1)
		spacescnt += conv->min_width - 1;
	convlen = 0;
	if (!conv->flag_minus)
		convlen += (int)ft_putnchars(' ', spacescnt);
	convlen += (int)ft_putchar(c);
	if (conv->flag_minus)
		convlen += (int)ft_putnchars(' ', spacescnt);
	return (convlen);
}
