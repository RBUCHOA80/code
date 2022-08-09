/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 11:35:57 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/10 11:35:57 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/* void	ft_putstr(char *str);

int	main(void)
{
	char	*str;

	str = ("Coloque sua frase para teste aqui!");
	ft_putstr(str);
	write(1, "\n", 1);
	write(1, &str[0], 1);
	write(1, "\n", 1);
} */

void	ft_putstr(char *str)
{
	int	n;

	n = 0;
	while (str[n] != '\0')
	{
		write(1, &str[n], 1);
		n = (n + 1);
	}
}
