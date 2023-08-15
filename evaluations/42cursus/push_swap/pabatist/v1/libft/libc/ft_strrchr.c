/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:54:19 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:54:20 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ret;
	int		strsize;

	strsize = (int)ft_strlen(str);
	ret = (char *)str + strsize;
	while (strsize-- >= 0)
	{
		if (*ret == (char)c)
			return (ret);
		ret--;
	}
	return (NULL);
}
