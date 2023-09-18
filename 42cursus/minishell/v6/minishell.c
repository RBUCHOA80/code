/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:06:46 by ruchoa            #+#    #+#             */
/*   Updated: 2023/09/18 18:03:15 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./minishell.h"

int	minishell(void)
{
	char	*line;

	while (1)
	{
		printf("%s%s%s%s%s", GREEN, " @", WHITE, ":", BLUE);
		line = readline("123>");
		// ft_execute(line);
		if (line == NULL)
			break ;
	}
	return (SUCCESS);
}