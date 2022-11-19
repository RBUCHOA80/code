/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:40:45 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/13 13:40:46 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	counter;
	int	upper_char;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		upper_char = (*(str + counter) >= 65 && *(str + counter) <= 90);
		if (!upper_char)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

int	main(void)
{
	char	a[] = {"ASHDUASH"};

	printf("%d", ft_str_is_uppercase(a));
	return (0);
}
