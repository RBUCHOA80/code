/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: microdri  <microdri@student.42.fr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 06:17:42 by microdri          #+#    #+#             */
/*   Updated: 2022/04/09 06:17:42 by microdri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int	res;

	if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else if (index > 1)
	{
		res = ft_fibonacci(index -1) + ft_fibonacci(index - 2);
		return (res);
	}
	else
		return (-1);
}

#include <stdio.h>

int main()
{
	printf("%d\n", ft_fibonacci(-10));
	printf("%d\n", ft_fibonacci(10));
}
