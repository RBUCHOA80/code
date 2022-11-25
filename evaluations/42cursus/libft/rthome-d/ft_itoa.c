/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rthome-d <rthome-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 12:59:34 by rthome-d          #+#    #+#             */
/*   Updated: 2022/06/14 20:41:53 by rthome-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nlen(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	else if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	return (len + 1);
}

static int	wrt_str(unsigned int nbr, int index, char *str)
{
	while (index > 0)
	{
		str[index] = (nbr % 10) + '0';
		nbr /= 10;
		index--;
	}	
	return (nbr);
}

char	*ft_itoa(int n)
{
	int				index;
	char			*str;
	unsigned int	nbr;

	index = nlen(n);
	str = (char *)malloc((index + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[index--] = 0;
	if (n < 0)
	{
		*str = '-';
		nbr = -n;
		wrt_str(nbr, index, str);
	}
	else
		*str = (wrt_str(n, index, str) % 10) + '0';
	return (str);
}
