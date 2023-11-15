/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:04:02 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/15 20:32:30 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_check_env(t_list *env, char *str)
{
	t_list	*lst;
	char	**temp;
	char	**strs;

	strs = ft_split(str, '=');
	lst = env;
	while (lst && lst->content)
	{
		temp = ft_split(lst->content, '=');
		if (ft_strcmp(temp[0], strs[0]) == EXIT_SUCCESS)
			break ;
		else
			lst = lst->next;
	}
	printf("(A) %s\n", (char *)lst->content);
	return (EXIT_FAILURE);
}

int	ft_export(t_minishell *data)
{
	char	*cmd;

	if (data->token->next == NULL)
		return (EXIT_SUCCESS);
	data->token = data->token->next;
	if (ft_isalpha(*data->token->content) == EXIT_SUCCESS && \
		*data->token->content != '_')
	{
		ft_fprintf(STDOUT_FILENO, \
			"minishell: export: `%s': not a valid identifier\n", \
				data->token->content);
		return (EXIT_FAILURE);
	}
	else if (ft_strchr(data->token->content, '=') == NULL)
		return (EXIT_SUCCESS);
	else if (ft_check_env(data->env, data->token->content) == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	else
	{
		cmd = data->token->content;
		ft_lstadd_back(&data->env, ft_lstnew(cmd));
		return (EXIT_SUCCESS);
	}
}
