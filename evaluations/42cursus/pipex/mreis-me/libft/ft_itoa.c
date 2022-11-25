/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mreis-me <mreis-me@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/20 12:51:11 by mreis-me          #+#    #+#             */
/*   Updated: 2022/05/22 19:27:03 by mreis-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_nbrlen(int n)
{
	int	nlen;

	nlen = 0;
	if (n <= 0)
		nlen++;
	while (n != '\0')
	{
		nlen++;
		n = n / 10;
	}
	return (nlen);
}

char	*ft_itoa(int n)
{
	int			nlen;
	long int	nb;
	char		*str;

	nlen = ft_nbrlen(n);
	nb = n;
	str = malloc(sizeof(char) * nlen + 1);
	if (!str)
		return (0);
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	else if (nb == 0)
		str[0] = '0';
	str[nlen--] = '\0';
	while (nb)
	{
		str[nlen] = nb % 10 + '0';
		nlen--;
		nb = nb / 10;
	}
	return (str);
}
