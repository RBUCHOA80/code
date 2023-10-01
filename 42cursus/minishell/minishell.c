/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/01 15:38:22 by ruchoa           ###   ########.fr       */
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
		printf("%s%s%s%s%s", GREEN, " RUCHOA_@_MINISHELL", WHITE, ":", RED);
		line = readline(ft_strjoin(getcwd(buff, PATH_MAX), "\e[0m$ "));
		line = ft_expand(data, line);
		//ft_token(data, line);
		printf("(A)>%s\n", line);
	}
	return (SUCCESS);
}
