/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:55:38 by jmenezes          #+#    #+#             */
/*   Updated: 2022/08/20 17:30:11 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	nbrlen(unsigned int u, unsigned int rad)
{
	int	i;

	i = 0;
	while (1)
	{
		i++;
		u /= rad;
		if (u == 0)
			return (i);
	}
}

char	*ft_utoa_base(unsigned int u, char *baseset)
{
	char			*str;
	int				i;
	unsigned int	rad;

	rad = (unsigned int)ft_strlen(baseset);
	i = nbrlen(u, rad);
	str = malloc(i + 1);
	if (str != NULL)
	{
		str[i--] = '\0';
		while (1)
		{
			str[i--] = baseset[u % rad];
			u /= rad;
			if (u == 0)
				break ;
		}
	}
	return (str);
}
