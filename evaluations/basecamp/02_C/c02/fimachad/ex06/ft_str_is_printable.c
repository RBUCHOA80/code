/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:40:54 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/13 13:40:55 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	counter;
	int	is_printable;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		is_printable = (*(str + counter) >= 32 && *(str + counter) <= 126);
		if (!is_printable)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

int	main(void)
{
	char	a[] = {50};

	printf("%d", ft_str_is_printable(a));
	return (0);
}
