/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 13:03:03 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/30 22:19:41 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	if (!str)
		return (0);
	while (str[c] != '\0')
		c++;
	return (c);
} */

size_t	ft_strlen(const char *str)
{
	size_t	len;

	if (!str)
		return (0);
	len = 0;
	while (str[len])
		len++;
	return (len);
}

/* char	*g_src[] = {\
					"A Sentence With 30 Characters.", \
					"A New Sentence, With 35 Characters.", \
					"Another Sentence, With 37 Characters.", \
					"Another New Sentence, With 41 Characters.", \
					};

int	main(void)
{
	int	i;

	i = -1;
	while (g_src[++i])
		printf("ft_strlen('%zu') = %s\n", ft_strlen(g_src[i]), g_src[i]);
	return (0);
} */
