/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tokenize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 14:48:22 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/11 22:22:58 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_check_type(char *str)
{
	if (ft_strncmp(str, "", 1) == 0)
		return (EMPTY);
	else if (ft_strncmp(str, ">", 2) == 0)
		return (TRUNC);
	else if (ft_strncmp(str, ">>", 3) == 0)
		return (APPEND);
	else if (ft_strncmp(str, "<", 2) == 0)
		return (INPUT);
	else if (ft_strncmp(str, "|", 2) == 0)
		return (PIPE);
	else if (ft_strncmp(str, ";", 2) == 0)
		return (END);
	else
		return (CMD);
}

t_input	*ft_new_token(char *str)
{
	t_input	*token;

	token = ft_calloc(1, sizeof(t_input));
	token->prev = NULL;
	token->content = str;
	token->type = ft_check_type(str);
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
		ft_token_last(*token)->next = new;
	}
	else if (new)
		*token = new;
}

int	ft_tokenize(t_minishell *data, char *line)
{
	t_input	*new;
	char	**strs;
	int		i;

	if (!line)
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
