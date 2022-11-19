/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llima-da <coder@student.42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/11 05:15:50 by llima-da          #+#    #+#             */
/*   Updated: 2021/12/12 00:57:06 by llima-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(void)
{
	char str[] = "asdfasdff";
	int c;	

    c = ft_str_is_lowercase(str);

	printf("%d", c);
	return (0);
}