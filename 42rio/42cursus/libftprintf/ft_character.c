/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:31:52 by ruchoa            #+#    #+#             */
/*   Updated: 2022/07/12 19:55:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	character_output(va_list var, int fd)
{
	char	character;
	int		len;	

	character = va_arg(var, int);
	len = write(fd, &character, 1);
	return (len);
}
