/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 18:59:15 by jmenezes          #+#    #+#             */
/*   Updated: 2022/08/20 19:09:18 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_specifier(char c)
{
	return (c == 'c'
		|| c == 's'
		|| c == 'p'
		|| c == 'd'
		|| c == 'i'
		|| c == 'u'
		|| c == 'x'
		|| c == 'X'
		|| c == '%');
}

int	is_flag(char c)
{
	return (c == '#'
		|| c == '+'
		|| c == '-'
		|| c == '0'
		|| c == ' ');
}

int	is_conversion(const char *str)
{
	size_t	i;

	if (*str != '%')
		return (0);
	str++;
	i = 0;
	while (is_flag(str[i]))
		i++;
	while (ft_isdigit(str[i]))
		i++;
	if (str[i] == '.')
		i++;
	while (ft_isdigit(str[i]))
		i++;
	return (is_specifier(str[i]));
}
