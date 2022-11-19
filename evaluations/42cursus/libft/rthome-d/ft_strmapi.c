/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 14:01:46 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/16 15:51:19 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		index;
	char	*output;

	if (!s)
		return (NULL);
	index = 0;
	output = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!output)
		return (NULL);
	while (s[index])
	{
		output[index] = f(index, s[index]);
		index++;
	}
	output[index] = 0;
	return (output);
}
