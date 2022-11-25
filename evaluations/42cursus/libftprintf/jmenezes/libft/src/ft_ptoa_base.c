/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmenezes <jmenezes@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 16:59:32 by jmenezes          #+#    #+#             */
/*   Updated: 2022/08/20 16:59:58 by jmenezes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	nbrlen(uintptr_t p, uintptr_t rad)
{
	uintptr_t	i;

	i = 0;
	while (1)
	{
		i++;
		p /= rad;
		if (p == 0)
			return (i);
	}
}

char	*ft_ptoa_base(uintptr_t p, char *baseset)
{
	char		*str;
	int			i;
	uintptr_t	rad;

	rad = (uintptr_t)ft_strlen(baseset);
	i = nbrlen(p, rad);
	str = malloc(i + 1);
	if (str != NULL)
	{
		str[i--] = '\0';
		while (1)
		{
			str[i--] = baseset[p % rad];
			p /= rad;
			if (p == 0)
				break ;
		}
	}
	return (str);
}
