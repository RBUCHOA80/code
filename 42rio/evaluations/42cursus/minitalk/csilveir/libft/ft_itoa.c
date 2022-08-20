/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csilveir <csilveir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 12:17:45 by csilveir          #+#    #+#             */
/*   Updated: 2022/06/06 11:45:25 by csilveir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strlen_number(long int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * (-1);
	}
	if (n == 0)
		return (1);
	while ((n % 10) == 0)
	{
		n = n / 10;
		i++;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		numb;
	long	longn;

	longn = (long)n;
	numb = ft_strlen_number(longn);
	str = malloc(sizeof(char) * (numb +1));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = 48;
	if (longn < 0)
	{
		str[0] = 45;
		longn = longn * (-1);
	}
	str[numb] = '\0';
	while (longn > 0)
	{
		numb--;
		str[numb] = 48 + longn % 10;
		longn = longn / 10;
	}
	return (str);
}
