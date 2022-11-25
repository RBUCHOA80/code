/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 18:58:05 by ruchoa            #+#    #+#             */
/*   Updated: 2022/05/19 20:17:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nb)
{
	char	nbr[10];
	int		i;

	if (nb == 0)
		write(1, "0", 1);
	i = 0;
	while (nb != 0)
	{
		if (nb < 0)
		{
			nbr[9 - i] = 48 + (nb % 10) * (-1);
			nb = nb / 10 * (-1);
			write(1, "-", 1);
			i++;
		}
		nbr[9 - i] = 48 + (nb % 10);
		nb = nb / 10;
		i++;
	}
	write(1, &nbr[10 - i], i);
}

int	main(void)
{
	char	*str;
	int		fd[] = {0, 1, 2, 3,};
	int		i;
	int		j;

	str = "Sua frase de testes aqui.\n";
	i = 0;
	while (i < (int) (sizeof(fd)/sizeof(fd[0])))
	{
		ft_putnbr(i);
		j = 0;
		while (str[j])
			write(fd[i], &str[j++], 1);
		i++;
	}
	return (0);
}

