/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:44:23 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/09 22:16:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>

int	ft_str_is_alpha(char *str);

int	main(void)
{
	char	*str;

	str = "Putyoursampletexthere";
	printf("%d\n", ft_str_is_alpha(str));
	return (0);
} */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(('A' <= str[i] && str[i] <= 'Z')
				|| ('a' <= str[i] && str[i] <= 'z')))
			return (0);
		i++;
	}
	return (1);
}

/*
Escreva uma função que retorne 1 se a string passada como parâmetro só contiver
caracteres alfabéticos e retorne 0 se a função contiver outros tipos de
caracteres.
*/
