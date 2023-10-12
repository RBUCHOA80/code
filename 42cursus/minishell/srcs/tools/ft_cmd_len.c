/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cmd_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 22:38:30 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/12 15:35:07 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

int	ft_cmd_len(t_minishell *data)
{
	t_input	*temp;
	int		len;

	temp = data->token;
	len = 0;
	while (temp && temp->type == CMD)
	{
		temp = temp->next;
		len++;
	}
	return (len);
}
