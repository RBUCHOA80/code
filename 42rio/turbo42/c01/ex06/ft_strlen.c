/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 22:31:58 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/28 23:14:39 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> //printf

int	ft_strlen(char *str);

int	main(void)
{
	char	*str;

	str = "Sua frase de teste aqui.";
	printf("str = %i\n", ft_strlen(str));
	return (0);
} */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length])
		length++;
	return (length);
}
