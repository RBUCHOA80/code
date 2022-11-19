/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 01:19:32 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/01 08:48:19 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_writehex(int nbr);

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (32 <= str[i] && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			ft_writehex(str[i]);
		}
		i++;
	}
}

void	ft_writehex(int nbr)
{
	char	hex;

	write(1, "\\", 1);
	if (nbr < 0)
		nbr = 256 + nbr;
	hex = (nbr / 16);
	if (hex <= 9)
		hex += 48;
	else
		hex += 87;
	write(1, &hex, 1);
	hex = (nbr % 16);
	if (hex <= 9)
		hex += 48;
	else
		hex += 87;
	write(1, &hex, 1);
}

/* int	main(void)
{
	char	*str;

	str = "Put \ryour \tsample text here!\n";
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	str = "Oi\nvoce esta bem?";
	ft_putstr_non_printable(str);
	write(1, "\n", 1);
	return (0);
} */
