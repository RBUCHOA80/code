/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:41:08 by dioda-si          #+#    #+#             */
/*   Updated: 2022/08/16 17:39:15 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_pointer(unsigned long int n)
{
	int		len;
	char	*base;

	len = 0;
	base = "0123456789abcdef";
	if (n < 16)
	{
		write(1, &base[n], 1);
		len++;
	}
	else
	{
		len = ft_pointer(n / 16) + len;
		len = ft_pointer(n % 16) + len;
	}
	return (len);
}
