/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:22:41 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/15 16:59:03 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_init_data(t_minishell *data)
{
	data->in = dup(STDIN);
	data->out = dup(STDOUT);
	return (RETURN_SUCCESS);
}

int	ft_init_env(t_minishell *data)
{
	static char	*arge[] = {\
							"HOME", \
							"PATH", \
							"USER", \
							"TERM", \
							};
	char		*str;
	int			i;

	i = 0;
	while (arge[i])
	{
		str = getenv(arge[i]);
		if (str)
		{
			str = ft_strjoin("=", str);
			str = ft_strjoin(arge[i], str);
			ft_lstadd_back(&data->env, ft_lstnew(str));
		}
		i++;
	}
	return (RETURN_SUCCESS);
}

//"CTRL+C" = SIGINT  -> ft_sigint()
//"CTRL+\" = SIGQUIT -> ft_sigquit()
int	ft_init_signal(void)
{
	signal(SIGINT, &ft_signal);
	signal(SIGQUIT, &ft_signal);
	return (RETURN_SUCCESS);
}

int	ft_init(t_minishell *data)
{
	ft_init_data(data);
	ft_init_env(data);
	ft_init_signal();
	return (RETURN_SUCCESS);
}
