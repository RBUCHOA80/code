/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 00:57:09 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:20:50 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
		((char *)b)[i++] = c;
	return (b);
}

/* char	g_str[] = "Put your text here.";

int	main(void)
{
	int		c;
	size_t	len;

	c = 'x';
	len = 4;
	printf("%p\t %s \n", g_str, g_str);
	ft_memset(g_str, c, len);
	printf("%p\t %s \n", g_str, g_str);
	return (0);
} */
