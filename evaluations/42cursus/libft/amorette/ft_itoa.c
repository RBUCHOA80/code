/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: angelo <angelo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 22:16:36 by angelo            #+#    #+#             */
/*   Updated: 2022/06/16 01:22:31 by angelo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digit(int n)
{
	int	size;

	size = 0;
	if (n < 0)
		size++;
	while (n > 9 || n < -9)
	{
		n = n / 10;
		size++;
	}
	return (size + 1);
}

char	*ft_itoa(int n)
{
	char			*str;
	unsigned int	num;
	int				size;

	size = ft_count_digit(n);
	str = (char *)malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (n < 0)
		num = -n;
	else
		num = n;
	while (size--)
	{
		str[size] = num % 10 + '0';
		num /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/* #include <stdio.h>
int main(void)
{
	char	*output;
	int n = -85;
	output = ft_itoa(n);
	printf ("n \t\t= %d\nft_itoa \t= %s\n", n, output);
	free (output);
	return (0);
} */
/* Call it:
* gcc -Wall -Wextra -Werror ft_itoa.c ft_strdup.c ft_strlen.c && ./a.out */
