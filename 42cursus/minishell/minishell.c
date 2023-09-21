/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/21 20:45:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	minishell(t_minishell *data)
{
	char	buff[PATH_MAX];
	char	*line;

	ft_banner();
	while (1)
	{
		printf("%s%s%s%s%s", GREEN, " RUCHOA_@_MINISHELL", WHITE, ":", BLUE);
		line = readline(strcat(getcwd(buff, PATH_MAX), "\e[0m$ "));
		ft_lst_search(data->env, line);
		if (line == NULL)
			break ;
		free(line);
	}
	return (SUCCESS);
}
