/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:09:16 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/28 22:59:54 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_check_opened_quotes(char *line)
{
	int	opened;
	int	i;

	opened = 0;
	i = 0;
	while (line[i] && i <= FILENAME_MAX)
	{
		if (i > 0 && line[i - 1] == '\\')
			continue ;
		else if (opened == 0 && line[i] == '\"')
			opened = '\"';
		else if (opened == 0 && line[i] == '\'')
			opened = '\'';
		else if (opened == '\"' && line[i] == '\"')
			opened = 0;
		else if (opened == '\'' && line[i] == '\'')
			opened = 0;
		i++;
	}
	if (opened == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}

int	ft_quote_check(t_minishell *data, char *line)
{
	if (ft_check_opened_quotes(line) == EXIT_FAILURE)
	{
		ft_putstr_fd("minishell: syntax error with opened quotes\n", STDERR);
		data->ret = 2;
		data->token = NULL;
		return (EXIT_FAILURE);
	}
	else
		return (EXIT_SUCCESS);
}

//"CTRL+D"
int	ft_parse(t_minishell *data, char *line)
{
	if (!line)
		ft_exit(data);
	if (ft_quote_check(data, line) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	else
		return (EXIT_SUCCESS);
}
