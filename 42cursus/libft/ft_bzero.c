/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/07 16:32:22 by ruchoa            #+#    #+#             */
/*   Updated: 2022/05/07 16:32:22 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/* char	g_str[] = "Put your text here.";

int	main(void)
{
	size_t	len;
	size_t	n;
	size_t	i;

	n = 9;
	len = ft_strlen(g_str);
	printf("%p %s \n", g_str, g_str);
	ft_bzero(&g_str, n);
	i = 0;
	printf("%p ", g_str);
	while (i < len)
	{
		if (g_str[i] < 32)
			printf("%d", g_str[i]);
		else
			printf("%c", g_str[i]);
		i++;
	}
	printf("\n");
	return (0);
} */
