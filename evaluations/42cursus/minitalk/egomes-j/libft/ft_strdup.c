/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:32:28 by egomes-j          #+#    #+#             */
/*   Updated: 2022/05/28 09:03:01 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		len;
	char	*res;

	len = ft_strlen(s1);
	res = malloc(len + 1);
	if (!s1 || !res)
		return (NULL);
	ft_memcpy(res, s1, len);
	res[len] = '\0';
	return (res);
}
