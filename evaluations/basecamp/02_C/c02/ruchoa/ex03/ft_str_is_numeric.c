/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:58:46 by ruchoa            #+#    #+#             */
/*   Updated: 2022/04/01 08:45:11 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_numeric(char *str);

int	main(void)
{
	char	*str;

	str = "0123456789";
	printf("%d\n", ft_str_is_numeric(str));
	return (0);
} */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!('0' <= str[i] && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

/*
Escreva uma função que retorne 1 se a string passada como parâmetro só contiver
números e retorne 0 se a função contiver outros tipos de caracteres.
*/