/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tokenize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:48:22 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/01 19:19:05 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_set_type(t_input *token)
{
	t_input	*prev;
	char	*content;

	prev = token->prev;
	content = token->content;
	if (ft_strcmp(content, ">>") == EXIT_SUCCESS)
		return (APPEND);
	else if (ft_strcmp(content, ">") == EXIT_SUCCESS)
		return (TRUNC);
	else if (ft_strcmp(content, "<") == EXIT_SUCCESS)
		return (INPUT);
	else if (ft_strcmp(content, "|") == EXIT_SUCCESS)
		return (PIPE);
	else if (ft_strcmp(content, ";") == EXIT_SUCCESS)
		return (END);
	else if (prev && (prev->type == CMD || prev->type == ARG))
		return (ARG);
	else
		return (CMD);
}

t_input	*ft_new_token(char *str)
{
	t_input	*token;

	token = ft_calloc(1, sizeof(t_input));
	token->prev = NULL;
	token->content = str;
	token->type = EMPTY;
	token->next = NULL;
	return (token);
}

t_input	*ft_token_last(t_input *token)
{
	if (!token)
		return (NULL);
	while (token->next)
		token = token->next;
	return (token);
}

void	ft_token_add_back(t_input **token, t_input *new)
{
	if (*token && new)
	{
		new->prev = ft_token_last(*token);
		new->type = ft_set_type(new);
		ft_token_last(*token)->next = new;
	}
	else if (new)
	{
		new->type = CMD;
		*token = new;
	}
}

int	ft_tokenize(t_minishell *data, char *line)
{
	t_input	*new;
	char	**strs;
	int		i;

	if (ft_parse(data, line) == EXIT_FAILURE)
		return (EXIT_FAILURE);
	strs = ft_split(ft_expand(data, line), ' ');
	i = 0;
	while (strs[i])
	{
		new = ft_new_token(strs[i]);
		ft_token_add_back(&data->token, new);
		i++;
	}
	return (EXIT_SUCCESS);
}
