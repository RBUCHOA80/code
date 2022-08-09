/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 15:32:11 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/18 18:14:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*str = {"Sua frase de testes aqui."};
	int		nbr;

	nbr = (ft_strlen(str) / 10) + '0';
	write(1, &nbr, 1);
	nbr = (ft_strlen(str) % 10) + '0';
	write(1, &nbr, 1);
	write(1, "\n", 1);
	return (0);
} */

int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	while (str[n])
		n++;
	return (n);
}
