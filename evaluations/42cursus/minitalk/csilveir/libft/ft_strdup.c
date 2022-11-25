/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 13:00:56 by csilveir          #+#    #+#             */
/*   Updated: 2022/06/06 08:55:40 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*pot;

	i = ft_strlen(s1) + 1;
	pot = (char *)malloc (i);
	if (pot == NULL)
		return (NULL);
	ft_strlcpy(pot, (const char *)s1, i);
	return (pot);
}
