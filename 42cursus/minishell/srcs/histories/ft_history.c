/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_history.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 14:21:45 by ruchoa            #+#    #+#             */
/*   Updated: 2023/10/15 16:52:55 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

void	ft_printf_history(HIST_ENTRY **arg)
{
	int	i;

	printf(" HIST\t\t PTR    \t     TIMESTAMP \t NEXT \t LINE\n");
	printf(" ----\t\t ---    \t     --------- \t ---- \t ----\n");
	i = 0;
	while (arg[i])
	{
		printf(" hist[%i] \t", i);
		printf(" %p ", arg[i]);
		printf(" %s \t\t", arg[i]->timestamp);
		printf(" %p \t", arg[i]->data);
		printf(" %s \n", arg[i]->line);
		i++;
	}
	printf("\n");
}

int	ft_history(char *line)
{
	HIST_ENTRY	**hists;

	add_history(line);
	hists = history_list();
	ft_printf_history(hists);
	return (RETURN_SUCCESS);
}
