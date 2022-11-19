/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fimachad <fimachad@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 13:41:11 by fimachad          #+#    #+#             */
/*   Updated: 2021/12/14 11:28:39 by fimachad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	lower_char;
	int	lst_up;
	int	lst_lwr;
	int	lst_nbr;

	i = 0;
	while (*(str + i) != '\0')
	{
		lower_char = (*(str + i) >= 97 && *(str + i) <= 122);
		lst_up = (*(str + i - 1) >= 65 && *(str + i - 1) <= 90);
		lst_lwr = (*(str + i - 1) >= 97 && *(str + i - 1) <= 122);
		lst_nbr = (*(str + i - 1) >= 48 && *(str + i - 1) <= 57);
		if ((str[i] == str[0]) && (str[0] >= 97 && str[0] <= 122))
			str[i] -= 32;
		else if (lower_char && !lst_lwr && !lst_up && !lst_nbr)
			str[i] -= 32;
		else if ((str[i] >= 65 && str[i] <= 90 && lst_lwr)
			|| (str[i] >= 65 && str[i] <= 90 && lst_up)
			|| (str[i] >= 65 && str[i] <= 90 && lst_nbr))
			str[i] += 32;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	a[] = {"J$#Va81 fasdf<asdf fa{sdf 43lxu fsadfaGHJKsdfsadfd"};

	ft_strcapitalize(a);
	printf("%s", a);
	return (0);
}
