/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:20:05 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:20:06 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char const *s, void (*f)(unsigned int, char *))
{
	size_t	index;
	size_t	s_size;

	if (!s)
		return ;
	s_size = ft_strlen(s);
	index = 0;
	while (index < s_size)
	{
		(f)(index, (char *)&s[index]);
		index++;
	}
	return ;
}
