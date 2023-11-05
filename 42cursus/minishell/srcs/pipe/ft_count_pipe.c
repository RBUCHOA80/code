/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_pipe.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 19:12:44 by ruchoa            #+#    #+#             */
/*   Updated: 2023/11/05 19:13:11 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

int	ft_count_pipe(t_minishell *data)
{
	t_input	*temp;
	int		count;

	temp = data->token;
	count = 0;
	while (temp)
	{
		if (temp->type == PIPE)
			count++;
		temp = temp->next;
	}
	return (count);
}
