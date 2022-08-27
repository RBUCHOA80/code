/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 10:55:59 by egomes-j          #+#    #+#             */
/*   Updated: 2022/05/27 15:05:31 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		index;
	int		end;

	if (!s1)
		return (NULL);
	end = (ft_strlen(s1) - 1);
	index = 0;
	while (s1[index] && ft_strchr(set, s1[index]))
		index++;
	while (s1[end] && ft_strchr(set, s1[end]) && (end > index))
		end--;
	str = ft_substr(s1, index, (end - index + 1));
	return (str);
}
