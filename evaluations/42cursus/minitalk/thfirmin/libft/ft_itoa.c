/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 11:26:52 by ruchoa            #+#    #+#             */
/*   Updated: 2022/06/11 23:22:16 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n);

char	*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_nbrlen(n);
	str = (char *)malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (NULL);
	str[i--] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		str[i--] = 48 - (n % 10);
		n = (n / 10) * (-1);
	}
	while (n)
	{
		str[i--] = 48 + (n % 10);
		n = (n / 10);
	}
	return (str);
}

static int	ft_nbrlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n = (n / 10);
		len++;
	}
	return (len);
}

/* int	g_nbr[] = {\
				-2147483648, \
				-1234567890, \
				-10, \
				-8, \
				-7, \
				-1, \
				0, \
				1, \
				2, \
				3, \
				1234567890, \
				2147483647, \
			};

int	main(void)
{
	int	i;

	i = 0;
	while (i < ((int) sizeof(g_nbr) / (int) sizeof(g_nbr[0])))
	{
		printf("%s \n", ft_itoa(g_nbr[i]));
		i++;
	}
	return (0);
} */
