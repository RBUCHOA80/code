/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egomes-j <egomes-j@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 17:40:54 by egomes-j          #+#    #+#             */
/*   Updated: 2022/05/28 08:40:30 by egomes-j         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_get_len(int num)
{
	int	len;

	len = 0;
	if (num <= 0)
		len++;
	while (num)
	{
		len++;
		num = (num / 10);
	}
	return (len);
}

static int	ft_abs_val(int nbr)
{
	if (nbr < 0)
		return (nbr * (-1));
	return (nbr);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*res;

	len = ft_get_len(n);
	res = malloc(sizeof(char) * (len + 1));
	if (!len || !res)
		return (NULL);
	res[len] = '\0';
	if (n < 0)
		res[0] = '-';
	if (n == 0)
		res[0] = '0';
	while (n)
	{
		len--;
		res[len] = ft_abs_val(n % 10) + 48;
		n = (n / 10);
	}
	return (res);
}
