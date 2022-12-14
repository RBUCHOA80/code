/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:26:27 by ruchoa            #+#    #+#             */
/*   Updated: 2022/09/24 16:59:24 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../get_next_line/get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

int	main(void)
{
	char	*line;
	int		fd;
	int		i;
	int		j;
	int		k;

	fd = open("/Users/ruchoa/dev/42rio/42cursus/fdf/42.fdf", O_RDONLY);
	i = 0;
	j = 0;
	while (1)
	{
		line = get_next_line(fd);
		if (!line)
			break ;
		if (((i > 0) && j != (ft_strlen(line) - 1)))
		{
			printf("ARQUIVO INVALIDO\n");
			free(line);
			exit(0);
		}
		j = (ft_strlen(line) - 1);
		k = 0;
		while (line[k])
		{
			if (line[k] != 32)
				printf("%i,", atoi(&line[k]));
			k++;
		}
		printf("\n");
		free(line);
		i++;
	}
	close(fd);
	printf("%i rows | %i cols\n", i, j);
	return (0);
}
