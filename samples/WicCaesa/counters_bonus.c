/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   counters_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 08:57:04 by cnascime          #+#    #+#             */
/*   Updated: 2022/08/26 20:09:15 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf_bonus.h"

// Counts how many characters will be printed. Useful for padding and return.
// Subtracts the characters from the minwidth for precision.
void	counter(const char *exp, t_flags *flags)
{
	va_list	specifier;
	int		count;
	int		number;

	count = -1;
	number = 0;
	va_copy(specifier, flags->argument);
	if (exp[flags->i] == 'c' || exp[flags->i] == '%')
		count = 1;
	if (exp[flags->i] == 'd' || exp[flags->i] == 'i')
	{
		number = va_arg(specifier, int);
		// ft_isnegativeforprintf(number, flags);
		count = ft_places(number);
	}
	if (exp[flags->i] == 'x' || exp[flags->i] == 'X')
		count = ft_hexlen(va_arg(specifier, unsigned int));
	if (exp[flags->i] == 'p')
		count = ft_pointerlen(va_arg(specifier, unsigned long));
	if (exp[flags->i] == 's')
		count = ft_strlen(va_arg(specifier, char *));
	if (exp[flags->i] == 'u')
		count = ft_places(va_arg(specifier, unsigned int));
	va_end(specifier);
}

void	flagcounter(const char *exp, t_flags *flags)
{
	va_list	sign;
	int		number;

	va_copy(sign, flags->argument);
	number = va_arg(sign, int);
	if (flags->plus == 1 && number >= 0)
		flags->minwidth--;
	if (flags->space == 1 && exp[flags->i] != 's' && number >= 0)
		flags->minwidth--;
	if (exp[flags->i] == 'o')
		flags->minwidth--;
	if (flags->hash == 1 && number != 0)
		flags->minwidth -= 2;
	va_end(sign);
}
