/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 09:03:33 by csilveir          #+#    #+#             */
/*   Updated: 2022/06/06 08:56:12 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	int		i;
	int		i2;

	i = ft_strlen(s1);
	i2 = ft_strlen(s2);
	new = malloc(sizeof(char) *(i + i2 +1));
	if (!new)
		return (NULL);
	new[i + i2] = '\0';
	while (i2-- != 0)
		new[i + i2] = s2[i2];
	while (i-- != 0)
		new[i] = s1[i];
	return (new);
}
