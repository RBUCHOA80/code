/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 01:44:16 by ruchoa            #+#    #+#             */
/*   Updated: 2022/03/27 23:34:42 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>	//malloc
#include <string.h>	//strjoin
#include <stdio.h>	//printf

char	*ft_strjoin(int size, char **strs, char *sep);

int	main(void)
{
	char	**strs;
	char	*sep;
	char	*buffer;
	int		size;

	strs[0] = "Put";
	strs[1] = "your";
	strs[2] = "sample";
	strs[3] = "text";
	strs[4] = "here!";
	sep = "-";
	size = 0;
	ft_strjoin(size, **strs, sep);
	return (0);
}

	// while (strs[i])
	// {
	// 	j = 0;
	// 	while (strs[i][j])
	// 		j++;
	// 	size = size + j;
	// 	i++;
	// }
	// ft_strjoin(size, &strs, sep);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buff;
	char	t;

	if (size == 0)
		return (0);
	else
	{
		t = malloc(sizeof(char) * size);
		return (0);
	}
	return(buff);
}
