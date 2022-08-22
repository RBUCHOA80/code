/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:32:26 by ruchoa            #+#    #+#             */
/*   Updated: 2022/07/30 16:26:46 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/* #include <stdio.h> //printf
#include <fcntl.h> //open

int	main(void)
{
	char	*str;
	int		ret;
	int		nbr;

	str = "Put your sample here!";
	nbr = 0x10;
	ret = printf("   printf -> %p %p %s %i ", &str, str, str, nbr);
	printf("\e[0;32m(%d byte(s))\e[0m\n", ret);
	ret = ft_printf("ft_printf -> %p %p %s %i ", &str, &str[0], str, nbr);
	ft_printf("\e[0;32m(%d byte(s))\e[0m\n", ret);
	return (0);
} */

//fd = open("./sample.txt", O_RDWR | O_CREAT | O_APPEND, 00700);

int	ft_printf_aux(char str, va_list var, int fd)
{
	int	ret;

	ret = 0;
	if (str == 'c')
		ret = character_output(var, fd);
	else if (str == 's')
		ret = string_output(var, fd);
	else if (str == 'p')
		ret = pointer_output(var, fd);
	else if (str == 'd')
		ret = decimal_output(var, fd);
	else if (str == 'i')
		ret = integer_output(var, fd);
	else if (str == 'u')
		ret = unsigned_integer_output(var, fd);
	else if (str == 'x')
		ret = hexadecimal_lower_output(var, fd);
	else if (str == 'X')
		ret = hexadecimal_upper_output(var, fd);
	else if (str == '%')
		ret = write(fd, "%", 1);
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	int					index;
	int					fd;
	va_list				var;
	int					ret;

	ret = 0;
	fd = 1;
	va_start(var, str);
	index = 0;
	while (str[index])
	{
		if (str[index] == '%')
		{
			ret += ft_printf_aux(str[index + 1], var, fd);
			index++;
		}
		else
		{
			write(fd, &str[index], 1);
			ret++;
		}
		index++;
	}
	va_end(var);
	return (ret);
}
