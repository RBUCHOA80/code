/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_argv_to_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ruchoa <ruchoa@student.42.rio>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 11:02:38 by ruchoa            #+#    #+#             */
/*   Updated: 2022/12/25 11:25:53 by ruchoa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./push_swap.h"

void	ft_argv_to_list(char **argv, t_list **stack)
{
	char			**strs;

	if (!(argv && stack))
		return ;
	while (*(++argv))
	{
		strs = ft_split(*argv, ' ');
		while (*strs)
			ft_lstadd_back(stack, ft_lstnew(ft_str_to_int(*strs++)));
	}
}
