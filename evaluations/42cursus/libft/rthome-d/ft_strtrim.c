/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:11:30 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/16 17:32:45 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		init;
	int		end;
	char	*output;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	init = 0;
	while (s1[init] && ft_strchr(set, s1[init]))
		init++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
		end--;
	output = ft_substr(s1, init, (end - init) + 1);
	return (output);
}
