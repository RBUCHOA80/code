/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dioda-si <dioda-si@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 20:39:06 by dioda-si          #+#    #+#             */
/*   Updated: 2022/06/04 11:47:31 by dioda-si         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_nlen(int n)
{
	unsigned int	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len = len + 1;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	len;
	unsigned int	nbr;

	len = ft_nlen(n);
	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		nbr = n * -1;
	}
	else
		nbr = n;
	if (nbr == 0)
			str[0] = '0';
	str[len] = '\0';
	while (nbr != 0)
	{
		str[len - 1] = (nbr % 10) + 48;
		nbr = nbr / 10;
		len--;
	}
	return (str);
}
