/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 18:13:30 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/13 14:21:02 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	startlen;
	char	*output;

	if (!s)
		return (0);
	if (start > ft_strlen(s))
		start = ft_strlen(s);
	startlen = ft_strlen(s + start);
	if (len > startlen)
		output = malloc((startlen + 1) * sizeof(*s));
	else
		output = malloc((len + 1) * sizeof(*s));
	if (!output)
		return (0);
	i = 0;
	while (s[i + start] && i < len)
	{
		output[i] = (char)s[i + start];
		i++;
	}
	output[i] = 0;
	return (output);
}
