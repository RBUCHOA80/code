/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabatist <pabatist@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 16:19:58 by pabatist          #+#    #+#             */
/*   Updated: 2023/08/14 16:19:59 by pabatist         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *s1)
{
	char	*new;
	size_t	len;

	len = ft_strlen(s1);
	new = (char *)malloc(len * sizeof(char) + 1);
	if (new == NULL)
		return (NULL);
	ft_strlcpy(new, s1, len + 1);
	return (new);
}
