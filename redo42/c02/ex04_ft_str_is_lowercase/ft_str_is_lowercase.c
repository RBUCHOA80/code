/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:10:22 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/09 22:17:17 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	*str;

	str = "putyoursampletexthere";
	printf("%d\n", ft_str_is_lowercase(str));
	return (0);
}

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('a' <= str[i] && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}

/*
Escreva uma função que retorne 1 se a string passada como parâmetro só contiver
caracteres alfabéticos minúsculos e retorne 0 se a função contiver outros tipos
de caracteres.
*/