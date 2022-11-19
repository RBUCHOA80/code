/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 20:30:53 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/22 23:34:11 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n)
{
	char	i;
	char	j;

	i = '0';
	while (i <= '9')
	{
		if (i > '0')
			write(1, ", ", 2);
		j = '0';
		while (j < (48 + n))
		{
			write(1, &i, 1);
			j++;
		}
		i++;
	}
	return ;
}

int	main(void)
{
	int	n;

	n = 9;
	ft_print_combn(n);
	return (0);
}

/*
n será tal que: 0 < n < 10.
*/
