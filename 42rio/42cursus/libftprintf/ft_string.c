/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:32:57 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/25 23:52:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	string_output(va_list var, int fd)
{
	char	*string;
	int		len;

	string = va_arg(var, char *);
	if (!string)
	{
		len = ft_strlength(STR_ERROR);
		write(fd, STR_ERROR, len);
		return (len);
	}
	len = ft_strlength(string);
	write(fd, string, len);
	return (len);
}
