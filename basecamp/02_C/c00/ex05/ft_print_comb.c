/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 20:46:59 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/15 16:58:15 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_print_comb(void);

int	main(void)
{
	ft_print_comb();
	return (0);
} */

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '9')
	{
		b = (a + 1);
		while (b <= '9')
		{
			c = (b + 1);
			while (c <= '9')
			{
				if (c > '2')
					write(1, ", ", 2);
				write(1, &a, 1);
				write(1, &b, 1);
				write(1, &c, 1);
				c++;
			}
			b++;
		}
		a++;
	}
}
