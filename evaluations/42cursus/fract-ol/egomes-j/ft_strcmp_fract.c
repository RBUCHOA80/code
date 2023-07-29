/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_fract.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 15:12:35 by egomes-j          #+#    #+#             */
/*   Updated: 2023/02/04 09:56:55 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	ft_strcmp_fract(const char *s1, const char *s2)
{
	size_t	count;

	count = 0;
	while ((s1[count] != '\0' && s2[count]) != '\0')
	{
		if (s1[count] != s2[count])
			return ((unsigned char) s1[count] - ((unsigned char) s2[count]));
		count++;
	}
	return ((unsigned char) s1[count] - ((unsigned char) s2[count]));
}
