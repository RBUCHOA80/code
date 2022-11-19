/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 08:31:41 by csilveir          #+#    #+#             */
/*   Updated: 2022/06/01 12:20:15 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void	*str1, const void	*str2, size_t n)
{
	size_t	i;
	char	*str;
	char	*des;

	i = 0;
	des = (char *)str1;
	str = (char *)str2;
	if (des == 0 && str == 0)
		return (0);
	if (des > str)
		while (n-- > 0)
			des[n] = str[n];
	else
	{
		while (i < n)
		{
			des[i] = str[i];
			i++;
		}
	}
	return (des);
}
