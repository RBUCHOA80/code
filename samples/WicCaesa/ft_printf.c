/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 21:51:16 by cnascime          #+#    #+#             */
/*   Updated: 2022/08/26 20:23:26 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	treatment(int fd, char specifier, va_list argument)
{
	if (specifier == 'c' || specifier == 'C')
		return (ft_putchar_fd(fd, va_arg(argument, int)));
	if (specifier == 's' || specifier == 'S')
		return (ft_putstr_fd(fd, va_arg(argument, char *)));
	if (specifier == 'd' || specifier == 'i'
		|| specifier == 'D' || specifier == 'I')
		return (ft_putint(va_arg(argument, int)));
	if (specifier == 'u' || specifier == 'U')
		return (ft_putuns(va_arg(argument, unsigned int)));
	if (specifier == 'o' || specifier == 'O')
		return (ft_putoct(va_arg(argument, unsigned int)));
	if (specifier == 'x' || specifier == 'X')
		return (ft_puthex(specifier, va_arg(argument, unsigned int)));
	if (specifier == 'p' || specifier == 'P')
		return (ft_putptr(va_arg(argument, unsigned long long)));
	if (specifier == '%')
		return (ft_putchar_fd(fd, specifier));
	return (0);
}

/*
• %% Prints a percent sign.
• %c Prints a single character.
• %s Prints a string.
• %p The void * pointer argument has to be printed in hexadecimal format.
• %i Prints an integer in base 10.
• %d Prints a decimal (base 10) number.
• %u Prints an unsigned decimal (base 10) number.
• %o Prints an unsigned octal (base 8) number.
• %x Prints an unsigned hexadecimal (base 16) lowercase format.
• %X Prints an unsigned hexadecimal (base 16) uppercase format.
*/

// Sem bônus.
/*int	ft_printf(const char *fixed, ...)
{
	int		index;
	int		count;
	va_list	listofarguments;

	index = 0;
	count = 0;
	va_start(listofarguments, fixed);
	while (fixed[index] != '\0')
	{
		if (fixed[index] == '%' && ft_strchr("cspdiuoxX%", fixed[index + 1]))
		{
			count += treatment(FD, fixed[index + 1], listofarguments);
			index++;
		}
		else
			count += ft_putchar_fd(FD, fixed[index]);
		index++;
	}
	va_end(listofarguments);
	return (count);
}*/

int	ft_printf(const char *fixed, ...)
{
	int		count;
	va_list	listofarguments;

	count = 0;
	va_start(listofarguments, fixed);
	while (*fixed != '\0')
	{
		if (*fixed == '%')
		{
			fixed++;
			count += treatment(FD, *fixed, listofarguments);
		}
		else
		{
			ft_putchar_fd(FD, *fixed);
			count++;
		}
		fixed++;
	}
	va_end(listofarguments);
	return (count);
}

