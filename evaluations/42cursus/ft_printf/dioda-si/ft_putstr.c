/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:10:52 by dioda-si          #+#    #+#             */
/*   Updated: 2022/08/16 17:41:21 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	index;

	index = 0;
	if (!s)
		return (write (1, "(null)", 6));
	while (s[index] != '\0')
	{
		ft_putchar(s[index]);
		index++;
	}
	return (index);
}
