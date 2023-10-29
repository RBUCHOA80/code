/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 01:35:23 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 19:30:34 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
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
		printf("ft_isdigit('%c') = %d\n", g_chr[i], ft_isdigit(g_chr[i]));
	return (0);
} */
