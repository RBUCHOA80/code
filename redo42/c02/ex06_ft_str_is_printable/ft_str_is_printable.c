/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:22:56 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/09 22:27:15 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	char	*str;

	str = "Put your sample text here!";
	printf("%d\n", ft_str_is_printable(str));
	return (0);
}

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(32 <= str[i] && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}

/*
Escreva uma função que retorne 1 se a string passada como parâmetro só contiver
caracteres imprimíveis e retorne 0 se a função contiver outros tipos de
caracteres.
*/