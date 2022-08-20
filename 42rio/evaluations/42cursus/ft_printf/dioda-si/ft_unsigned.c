/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 19:45:43 by dioda-si          #+#    #+#             */
/*   Updated: 2022/08/16 17:41:44 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int n)
{
	int	len;

	len = 0;
	if (n < 10)
	{
		ft_putchar(n + 48);
		len++;
	}
	else
	{
		len = ft_unsigned(n / 10) + len;
		len = ft_unsigned(n % 10) + len;
	}
	return (len);
}
