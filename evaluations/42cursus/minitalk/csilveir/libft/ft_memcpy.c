/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 13:13:20 by csilveir          #+#    #+#             */
/*   Updated: 2022/05/25 15:53:52 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	int		i;
	char	*str;
	char	*des;

	i = 0;
	des = (char *)dst;
	str = (char *)src;
	if (des == 0 && str == 0)
		return (0);
	while (n > 0)
	{
		des[i] = str[i];
		n--;
		i++;
	}
	return (des);
}
