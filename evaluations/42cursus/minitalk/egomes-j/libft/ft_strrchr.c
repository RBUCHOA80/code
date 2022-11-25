/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:32:19 by egomes-j          #+#    #+#             */
/*   Updated: 2022/05/27 15:03:40 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char const *s, int c)
{
	int	index;
	int	tmp;

	index = 0;
	tmp = -1;
	while (s[index])
	{
		if (s[index] == (char const)c)
			tmp = index;
		index++;
	}
	if (c == '\0')
		return ((char *)s + index);
	if (tmp != -1)
		return ((char *)s + tmp);
	return (NULL);
}
