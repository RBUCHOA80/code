/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:41:05 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/14 11:30:48 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	int	up_char;

	i = 0;
	while (*(str + i) != '\0')
	{
		up_char = (*(str + i) >= 65 && *(str + i) <= 90);
		if (up_char)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	char	a[] = {"letciaAAWiciaAAKUDJhhhh2 * $ #$^&^&*"};

	ft_strlowcase(a);
	printf("aqui: %s", a);
	return (0);
}
