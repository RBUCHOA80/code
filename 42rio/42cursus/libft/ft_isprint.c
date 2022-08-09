/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/30 03:01:04 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:24:50 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (32 <= c && c <= 126)
		return (TRUE);
	return (FALSE);
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
		printf("ft_isprint('%c') = %d\n", g_chr[i], ft_isprint(g_chr[i]));
	return (0);
} */
