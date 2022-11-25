/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 19:52:06 by pbotelho          #+#    #+#             */
/*   Updated: 2022/04/20 02:50:16 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (dest == NULL)
		return (NULL);
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*cpy;
	int			index;

	cpy = malloc(sizeof(t_stock_str) * (ac + 1));
	if (cpy == NULL)
		return (NULL);
	index = 0;
	while (index < ac)
	{
		cpy[index].size = ft_strlen(av[index]);
		cpy[index].str = av[index];
		cpy[index].copy = ft_strcpy(cpy[index].copy, av[index]);
		if (cpy[index].copy == NULL)
			return (NULL);
		index++;
	}
	cpy[index] = (struct s_stock_str){0, 0, 0};
	return (cpy);
}

#include <stdio.h>
int	main(void)
{
	int i = 0;
	char	*av[] = {"bora", "testar", "esta", "bagaça", "mais"
	, "uma", "porrada", "de", "vezes", "mais um", "mais dois"};
	int size = (sizeof(av) / sizeof(av[0]));
	while (i < size)
	{
		printf("%d\n", ft_strs_to_tab(size, av)[i].size);
		printf("%p <=> %s\n", ft_strs_to_tab(size, av)[i].str, ft_strs_to_tab(size, av)[i].str);
		printf("%p <=> %s\n..........\n", ft_strs_to_tab(size, av)[i].copy, ft_strs_to_tab(size, av)[i].copy);
		i++;
	}
}