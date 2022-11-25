/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:40:25 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/13 13:40:26 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	counter;
	int	lower_char;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		lower_char = (*(str + counter) >= 97 && *(str + counter) <= 122);
		if (!(lower_char))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

int	main(void)
{
	char	a[] = {"leticia"};

	printf("%d", ft_str_is_lowercase(a));
	return (0);
}
