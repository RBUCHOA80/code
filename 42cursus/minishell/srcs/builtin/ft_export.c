/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_export.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 13:04:02 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/26 19:52:35 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_env_cmp(t_list *env, char *env_name)
{
	char	**split_env;

	split_env = ft_split(env->content, '=');
	if (ft_strcmp(split_env[0], env_name) == EXIT_SUCCESS)
		return (EXIT_SUCCESS);
	else
		return (EXIT_FAILURE);
}

t_list	*ft_env_prev(t_list *env, char *env_name)
{
	t_list	*prev;

	prev = env;
	if (ft_env_cmp(prev, env_name) == EXIT_SUCCESS)
		return (prev);
	while (prev && prev->content)
	{
		if (ft_env_cmp(prev->next, env_name) == EXIT_SUCCESS)
			return (prev);
		else
			prev = prev->next;
	}
	return (NULL);
}

void	ft_env_delete(t_list **env, char *env_name)
{
	t_list	*prev;
	t_list	*temp;

	prev = ft_env_prev((*env), env_name);
	if ((*env) == prev)
		(*env) = (*env)->next;
	else
	{
		temp = ft_env_search((*env), env_name);
		prev->next = temp->next;
	}
	return ;
}

int	ft_export(t_minishell *data)
{
	char	*full_content;
	char	**env_name;

	if (data->token->next == NULL)
		return (EXIT_SUCCESS);
	data->token = data->token->next;
	full_content = data->token->content;
	env_name = ft_split(full_content, '=');
	if (ft_isalpha(*full_content) == EXIT_SUCCESS && \
		*full_content != '_')
	{
		ft_fprintf(STDOUT_FILENO, \
			"minishell: export: `%s': not a valid identifier\n", \
				full_content);
		return (EXIT_FAILURE);
	}
	else if (ft_strchr(full_content, '=') == NULL)
		return (EXIT_SUCCESS);
	else if (ft_env_search(data->env, env_name[0]) == NULL)
		;
	else
		ft_env_delete(&data->env, env_name[0]);
	ft_lstadd_back(&data->env, ft_lstnew(full_content));
	return (EXIT_SUCCESS);
}
