/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/08 17:30:02 by ruchoa            #+#    #+#             */
/*   Updated: 2022/05/08 17:30:02 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c);
static int	ft_issimbol(char c);

int	ft_atoi(const char *str)
{
	int	is_negative;
	int	nbr;

	is_negative = 1;
	nbr = 0;
	while (ft_isspace(*str))
		str++;
	if (ft_issimbol(*str))
	{
		if (*str++ == '-')
			is_negative *= (-1);
	}
	while (ft_isdigit(*str))
		nbr = (nbr * 10) + (*str++ - 48);
	return (is_negative * nbr);
}

static int	ft_isspace(char c)
{
	if (c == ' ' || ('\t' <= c && c <= '\r'))
		return (TRUE);
	return (FALSE);
}

static int	ft_issimbol(char c)
{
	if (c == '+' || c == '-')
		return (TRUE);
	return (FALSE);
}

/* char	g_str[][15] = {\
							"   -2147483648", \
							"\t\v\n-1234567890", \
							"   -10", \
							"   -3", \
							"   -2", \
							"   -1", \
							" 0", \
							"   1", \
							"2", \
							"\r3", \
							" \v10", \
							"1234567890", \
							"2147483647e1234", \
						};

int	main(void)
{
	int	i;

	i = 0;
	while (i < (int)(sizeof(g_str) / sizeof(g_str[0])))
		printf("%i \n", ft_atoi(g_str[i++]));
	return (0);
} */
