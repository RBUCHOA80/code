/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liperman <liperman@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:20:06 by liperman          #+#    #+#             */
/*   Updated: 2022/07/26 15:17:22 by liperman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *arg)
{
	int	i;

	i = 0;
	if (!arg)
		return (ft_print_str("(null)"));
	while (arg[i] != '\0')
	{
		ft_putchar(arg[i]);
		i++;
	}
	return (i);
}

int	ft_print_int(int arg)
{
	int	result;

	result = 0;
	if (arg == -2147483648)
	{
		result += ft_print_str("-2147483648");
		return (result);
	}
	if (arg < 0)
	{
		result += ft_putchar('-');
		arg = (arg * -1);
	}
	if (arg >= 10)
		result += ft_print_int(arg / 10);
	result += ft_putchar((arg % 10) + '0');
	return (result);
}

int	ft_print_uint(unsigned int arg)
{
	int	result;

	result = 0;
	if (arg >= 10)
		result += ft_print_uint(arg / 10);
	result += ft_putchar(arg % 10 + 48);
	return (result);
}

int	ft_print_percent(void)
{
	int	result;

	result = ft_putchar('%');
	return (result);
}
