/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 21:43:59 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:19:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
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
	{
		printf("ft_strncmp('%i') = %s | %s\n", \
			ft_strncmp(g_src[0], g_src[i], ft_strlen(g_src[0])), \
			g_src[0], g_src[i]);
	}
	return (0);
} */
