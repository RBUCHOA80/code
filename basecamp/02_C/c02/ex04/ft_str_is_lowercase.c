/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 00:57:38 by ruchoa            #+#    #+#             */
/*   Updated: 2022/02/15 00:57:38 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <unistd.h>

int	ft_str_is_lowercase(char *str);

int	main(void)
{
	char	str[] = {"frasedetestesaqui"};

	if (ft_str_is_lowercase(str))
		write (1, "1", 1);
	else
		write (1, "0", 1);
	return (0);
} */

int	ft_str_is_lowercase(char *str)
{
	int		error;
	int		n;

	error = 0;
	n = 0;
	while (str[n])
	{
		if (str[n] < 'a' || 'z' < str[n])
		{
			error++;
		}
		if (str[n] == '\0')
			error = 0;
		n++;
	}
	if (error != 0)
		return (0);
	else
		return (1);
}

/* 
Resultados:
1 - Só contém caracteres alfabéticos minúsculos ou está vazia.
0 - A string contém outros tipos de caracteres.
*/
