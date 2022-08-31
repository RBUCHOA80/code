/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 01:00:13 by ruchoa            #+#    #+#             */
/*   Updated: 2022/08/30 21:48:26 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h> //open
#include <stdio.h> //printf

char	*g_path[] = {\
	"./txt_files/sample3.txt", \
	/* "./txt_files/sample4.txt", \ */
	/* "./txt_files/sample5.txt", \ */
	/* "./txt_files/sample6.txt", \ */
	/* "./txt_files/sample7.txt", \ */
};

/*
fd[5] line[11]
fd[7] line[13]
fd[3] line[19]
fd[6] line[19]
fd[4] line[26]
*/

int	main(void)
{
	char	*ret;
	int		file;
	int		line;
	int		exit;
	int		i;

	file = 0;
	while (g_path[file])
		open(g_path[file++], O_RDONLY);
	line = 1;
	while (1)
	{
		exit = 0;
		i = 0;
		while (i < file)
		{
			ret = get_next_line(3 + i);
			if (!ret)
				exit++;
			else
				printf("\e[1;32mfd[%i] \e[1;31mline[%i] --> \e[0m%s", 3 + i, line, ret);
			free(ret);
			i++;
		}
		if (exit == file)
			break ;
		line++;
	}
	while (file)
		close(file--);
	return (0);
}
