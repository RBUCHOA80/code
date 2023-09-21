/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/21 19:32:06 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	minishell(void)
{
	char	buff[PATH_MAX];
	char	*line;

	ft_banner();
	while (1)
	{
		printf("%s%s%s%s%s", GREEN, " ruchoa@minishell", WHITE, ":", BLUE);
		line = readline(strcat(getcwd(buff, 256), "\e[0m$ "));
		// ft_execute(line);
		if (line == NULL)
			break ;
	}
	return (SUCCESS);
}