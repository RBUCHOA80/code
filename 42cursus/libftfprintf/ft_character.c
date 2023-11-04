/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_character.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 19:31:52 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/03 21:00:56 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftfprintf.h"

int	ft_character_output(va_list var, int fd)
{
	char	character;
	int		len;	

	character = va_arg(var, int);
	len = write(fd, &character, 1);
	return (len);
}
