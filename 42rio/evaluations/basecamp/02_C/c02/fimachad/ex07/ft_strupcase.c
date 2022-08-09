/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:41:00 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/13 13:41:00 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	counter;
	int	lower_char;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		lower_char = (*(str + counter) >= 97 && *(str + counter) <= 122);
		if (lower_char)
		{
			str[counter] -= 32;
		}
		counter++;
	}
	return (str);
}

int	main(void)
{
	char	a[] = {"leticiaAAKUDJhhhh2 * $ #$^&^&*"};

	ft_strupcase(a);
	printf("aqui: %s", a);
	return (0);
}
