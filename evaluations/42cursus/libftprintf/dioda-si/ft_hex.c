/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:45:43 by dioda-si          #+#    #+#             */
/*   Updated: 2022/08/20 14:42:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex(unsigned int n, char str)
{
	int		len;
	char	*base;

	len = 0;
	if (str == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n < 16)
	{
		write(1, &base[n], 1);
		len++;
	}
	else
	{
		len = ft_hex(n / 16, str) + len;
		len = ft_hex(n % 16, str) + len;
	}
	return (len);
}
