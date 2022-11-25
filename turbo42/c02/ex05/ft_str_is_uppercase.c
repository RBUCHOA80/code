/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:17:35 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/01 08:43:10 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_uppercase(char *str);

int	main(void)
{
	char	*str;

	str = "PUTYOURSAMPLETEXTHERE";
	printf("%d\n", ft_str_is_uppercase(str));
	return (0);
} */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('A' <= str[i] && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}

/*
Escreva uma função que retorne 1 se a string passada como parâmetro só contiver
caracteres alfabéticos maiúsculos e retorne 0 se a função contiver outros tipos
de caracteres.
*/