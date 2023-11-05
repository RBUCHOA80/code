/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/29 23:11:05 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/05 09:36:52 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'))
		return (EXIT_FAILURE);
	return (EXIT_SUCCESS);
}

/* int		g_chr[] = {\
					'\0', '\n', '\t', \
					'*', '%', \
					'0', '9', \
					'A', 'Z', \
					'a', 'z', \
					-50, -10, -1, \
					0, \
					1, 50, 128, 127, \
				};

int	main(void)
{
	int	i;

	i = -1;
	while (++i < (int)(sizeof(g_chr) / sizeof(g_chr[0])) - 1)
		printf("ft_isalpha('%c') = %d\n", g_chr[i], ft_isalpha(g_chr[i]));
	return (0);
} */
