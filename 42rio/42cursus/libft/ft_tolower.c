/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 21:22:58 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:24:50 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		return (c + 32);
	return (c);
}

/* int	g_chr[] = {\
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
		printf("ft_tolower('%c') = %c\n", g_chr[i], ft_tolower(g_chr[i]));
	return (0);
} */
