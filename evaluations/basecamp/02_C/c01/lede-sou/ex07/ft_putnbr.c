/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 05:50:12 by lede-sou          #+#    #+#             */
/*   Updated: 2022/02/10 16:34:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_digit_list(int n);
char	converter(int x);

int	main(void)
{
	ft_putnbr(105236643);
	return (0);
}

void	ft_putnbr(int nb)
{
	int	n;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (nb < 0)
	{
		n = (nb * -1);
		write(1, "-", 1);
	}
	else
	{
		n = nb;
	}
	ft_digit_list(n);
}

void	ft_digit_list(int n)
{
	int		i;
	int		count;
	char	x;
	char	base_list[11];

	count = 0;
	while (n != 0)
	{
		x = (n % 10);
		n = n / 10;
		base_list[count] = converter(x);
		count++;
	}
	while (count >= 0)
	{
		i = base_list[count - 1];
		write(1, &i, 1);
		count--;
	}
}

char	converter(int x)
{
	if (x == 0)
		return ('0');
	if (x == 1)
		return ('1');
	if (x == 2)
		return ('2');
	if (x == 3)
		return ('3');
	if (x == 4)
		return ('4');
	if (x == 5)
		return ('5');
	if (x == 6)
		return ('6');
	if (x == 7)
		return ('7');
	if (x == 8)
	{
		return ('8');
	}
	else
	{
		return ('9');
	}
}
