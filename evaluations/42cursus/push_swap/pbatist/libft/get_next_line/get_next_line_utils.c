/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:23:13 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:23:14 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include "get_next_line.h"

size_t	next_nl(char *buffer)
{
	int	index;

	index = 0;
	while (buffer[index] != '\n')
	{
		if (!buffer[index])
			return (0);
		index++;
	}
	return (1);
}

size_t	end_line(char *buffer)
{
	int	index;

	index = 0;
	while (buffer[index] && buffer[index] != '\n')
		index++;
	return (index);
}
