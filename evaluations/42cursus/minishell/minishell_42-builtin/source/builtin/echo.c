/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: parnaldo <parnaldo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 19:54:17 by parnaldo          #+#    #+#             */
/*   Updated: 2023/02/06 18:20:11 by gusousa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/minishell.h"

char	*reduce_flag(char *str)
{
	int	come_back;

	while (*str)
	{
		if (*str == '-')
		{
			come_back = 0;
			str++;
			while (*(str + come_back) == 'n')
				come_back++;
			if (*(str + come_back) != ' ' && (*(str + come_back) != '\0'))
				return (ft_strdup(str));
		}
		str++;
	}
	return (NULL);
}

void    ft_echo(t_info *info)
{
	int		nbr_child;
	char	*ready_str;

	nbr_child = fork();
	if (nbr_child == 0)
	{
		ready_str = reduce_flag(*info->sentence);
		printf("%s\n", ready_str);
		free(ready_str);
		exit(0);
	}
}
