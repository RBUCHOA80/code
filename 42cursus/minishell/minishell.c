/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/03 20:36:11 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

int	minishell(t_minishell *data)
{
	char	buff[PATH_MAX];
	char	*line;

	ft_banner();
	while (1)
	{
		printf("%s%s%s%s%s", GREEN, "42_@_MINISHELL", WHITE, ":", RED);
		line = readline(ft_strjoin(getcwd(buff, PATH_MAX), "\e[0m$ "));
		line = ft_expand(data, line);
		if (ft_is_builtin(line))
			ft_exec_builtin(data, line);
	}
	return (EXIT_SUCCESS);
}
