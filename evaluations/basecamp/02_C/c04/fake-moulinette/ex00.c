/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex00.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:27:23 by vgoncalv          #+#    #+#             */
/*   Updated: 2022/05/01 22:18:00 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str);

void	ft_strlen_test(char *str)
{
	int size;
	int funsigned int;

	size = strlen(str);
	funsigned int = ft_strlen(str);
	if (size != funsigned int)
		printf("> KO, return value of ft_strlen differs from expected. expected: %d, got: %d\n", size, funsigned int);
	else
		printf("> OK. result: %d\n", funsigned int);
}

int	main(void)
{
	char *str;

	str = "";
	ft_strlen_test(str);
	str = "Test";
	ft_strlen_test(str);
	str = "Testing mored and more and more and more and more and more.";
	ft_strlen_test(str);
	return (0);
}
