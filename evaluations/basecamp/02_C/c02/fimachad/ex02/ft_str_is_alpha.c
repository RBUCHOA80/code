/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:39:24 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/13 13:39:25 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	counter;
	int	upper_char;
	int	lower_char;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		upper_char = (*(str + counter) >= 65 && *(str + counter) <= 90);
		lower_char = (*(str + counter) >= 97 && *(str + counter) <= 122);
		if (!(upper_char || lower_char))
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

int	main(void)
{
	char	a[] = {"letic3fasdia"};

	printf("%d", ft_str_is_alpha(a));
	return (0);
}
