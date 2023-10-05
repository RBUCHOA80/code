/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tokenize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:48:22 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/04 23:35:29 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_print_tokens(t_input *token)
{
	while (token && token->str && token->type)
	{
		printf("%s ", token->str);
		printf("%i\n", token->type);
		token = token->next;
	}
	return (EXIT_SUCCESS);
}

int	ft_check_type(char *str)
{
	if (!ft_strncmp(str, "-", 1))
		return (ARG);
	else if (!ft_strncmp(str, ">", 2))
		return (TRUNC);
	else if (!ft_strncmp(str, ">>", 3))
		return (APPEND);
	else if (!ft_strncmp(str, "<", 2))
		return (INPUT);
	else if (!ft_strncmp(str, "|", 2))
		return (PIPE);
	else if (!ft_strncmp(str, ";", 2))
		return (END);
	else
		return (CMD);
}

int	ft_tokenize(t_minishell *data, char *line)
{
	t_input	*new;
	char	**strs;
	int		i;

	strs = ft_split(line, ' ');
	i = 0;
	while (strs[i])
	{
		if (i)
			new->prev = new;
		new = malloc(sizeof(t_input));
		if (i == 0)
			new->prev = NULL;
		printf("%p\t", new->prev);
		new->str = strs[i];
		printf("%s\t", new->str);
		new->type = ft_check_type(strs[i]);
		printf("%i\n", new->type);
		data->token = new;
		i++;
	}
	//ft_print_tokens(data->token);
	return (EXIT_SUCCESS);
}
