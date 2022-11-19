/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:39:29 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/13 13:39:31 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	counter;
	int	is_num;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		is_num = (*(str + counter) >= 48 && *(str + counter) <= 57);
		if (!is_num)
		{
			return (0);
		}
		counter++;
	}
	return (1);
}

int	main(void)
{
	char	a[] = {""};

	printf("%i", ft_str_is_numeric(a));
	return (0);
}
