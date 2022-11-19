/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 18:35:20 by dioda-si          #+#    #+#             */
/*   Updated: 2022/05/19 17:11:31 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*str1_copy;
	unsigned char	*str2_copy;
	size_t			i;

	str1_copy = ((unsigned char *)str1);
	str2_copy = ((unsigned char *)str2);
	i = 0;
	while (i < n)
	{
		if (str1_copy[i] - str2_copy[i])
			return (str1_copy[i] - str2_copy[i]);
		i++;
	}
	return (0);
}
