/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:16:43 by ruchoa            #+#    #+#             */
/*   Updated: 2023/03/21 20:26:31 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int				*rrange;
	unsigned int	len;
	unsigned int	i;

	i = 0;
	if (end > start)
		len = end - start;
	else
		len = start - end;
	rrange = (int *)malloc(sizeof(int) * len + 1);
	if (!rrange)
		return (0);
	while (i <= len)
	{
		if (end > start)
			rrange[i++] = end--;
		else
			rrange[i++] = end++;
	}
	return (rrange);
}

// 2147483647 - (-1) = 2147483648 <=> -2147483648

int	main(void)
{
	int	*teste;
	int	i;
	int	start;
	int	end;

	start = INT_MIN + 20;
	end = INT_MIN + 5;
	teste = ft_rrange(start, end);
	i = 0;
	while (i < 10)
	{
		printf("%d\n", teste[i]);
		i++;
	}
}
